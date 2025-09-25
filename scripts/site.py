from pathlib import Path
import os
import yaml

import species_names
import item_names
import move_names
import ability_names
import various


MASTERSHEET = "../lucid_book/src/mastersheet.md"
HTML_OUTPUT = "src/resources.html"
MARKDOWN_OUTPUT = "../lucid_book/src/item_and_encounters.md"

trainer_parties = "src/trainer_parties.h"
encounters = "src/encounters.yaml"
items = "src/items.yaml"
tutors = "src/tutors.yaml"

nothing_here = [
    "Route 129 [Perma Tailwind]",
    "Route 131 [Perma Tail Wind]",
    "Pokemon League",
    "Weather Institute",
    "Route 105",
    "Route 134",
    "Meteor Falls B1F2R",
    "Route 104 [South]",
    "Petalburg Woods [Part 2]",
]

trainer_name = None
species_data = {
    ".species": None,
    ".lvl": None,
    ".heldItem": None,
    ".ability": None,
    ".nature": "Hardy",
    ".status": None,
    ".gender": None,
    ".teraType": None,
    ".moves": [],
}

def write_file(line):
    with open(MASTERSHEET, "a") as output:
        output.write(line)
        output.write("\n")

def handle_location(line):
    full_location = line.split(":")[1].strip("\n").strip(" ")
    location = full_location.split("[")
    location = location[0].strip()
    write_file("### " + full_location)

    if full_location not in nothing_here:
        markdown_items_encounters("## " + full_location)
        html_items_encounters(f'<div class="resources">')
        html_items_encounters(f'<h1>{full_location}</h1>')

    encounter_types = [
        "Land",
        "Rod",
        "Water",
        "Rock Smash",
        "Special",
    ]
    with open(encounters, 'r') as encounter_data:
        encounter_data = yaml.safe_load(encounter_data)
        for encounter_type in encounter_types:
            if location in encounter_data and encounter_type in encounter_data[location]:
                write_file(f'* {encounter_type}: {", ".join(encounter_data[location][encounter_type])}')
                if full_location not in nothing_here:
                    markdown_items_encounters(f'* {encounter_type}: {", ".join(encounter_data[location][encounter_type])}')
                    html_items_encounters(f'<p><b>{encounter_type}:</b> {", ".join(encounter_data[location][encounter_type])}</p>')

    item_receive_types = [
        "Gym Leader Rewards",
        "Shop TM Packages",
        "NPC Items / Rock Smash",
        "Overworld Items",
        "Berry Trees",
    ]
    with open(items, 'r') as item_data:
        item_data = yaml.safe_load(item_data)
        for receive_type in item_receive_types:
            if location in item_data[receive_type]:
                write_file(f'* {receive_type}: {", ".join(item_data[receive_type][location])}')
                if full_location not in nothing_here:
                    markdown_items_encounters(f'* {receive_type}: {", ".join(item_data[receive_type][location])}')
                    html_items_encounters(f'<p><b>{receive_type}:</b> {", ".join(item_data[receive_type][location])}</p>')

    tutor_types = [
        "Gym Leader Tutor Prize",
        "Overworld Tutor",
    ]
    with open(tutors, 'r') as tutor_data:
        tutor_data = yaml.safe_load(tutor_data)
        for tutor_type in tutor_types:
            if location in tutor_data[tutor_type]:
                write_file(f'* {tutor_type}: {", ".join(tutor_data[tutor_type][location])}')
                if full_location not in nothing_here:
                    markdown_items_encounters(f'* {tutor_type}: {", ".join(tutor_data[tutor_type][location])}')
                    html_items_encounters(f'<p><b>{tutor_type}:</b> {", ".join(tutor_data[tutor_type][location])}</p>')


    if full_location not in nothing_here:
        html_items_encounters("</div>")

    write_file("")
    if full_location not in nothing_here:
        markdown_items_encounters("")
        html_items_encounters("")

def handle_trainer_name(line):
    trainer_name = line.split(":")[1].strip("\n").strip(" ")
    write_file(f'#### *{trainer_name}*')

def handle_species(line):
    species = line.split("=")[1].strip()[:-1]
    species_data[".species"] = species_names.species_dictionary[species]

def handle_level(line):
    level = line.split("=")[1].strip()[:-1]
    species_data[".lvl"] = level

def handle_held_item(line):
    held_item = line.split("=")[1].strip()[:-1]
    species_data[".heldItem"] = item_names.names[held_item]

def handle_ability(line):
    ability = line.split("=")[1].strip()[:-1]
    species_data[".ability"] = ability_names.names[ability]

def handle_nature(line):
    nature = line.split("=")[1].strip()[:-1]
    species_data[".nature"] = various.nature_names[nature]

def handle_status(line):
    status = line.split("=")[1].strip()[:-1]
    species_data[".status"] = various.status_names[status]

def handle_gender(line):
    gender = line.split("=")[1].strip()[:-1]
    if gender == "TRAINER_MON_FEMALE":
        species_data[".gender"] = "f"
    else:
        species_data[".gender"] = "m"

def handle_tera(line):
    tera_type = line.split("=")[1].strip()[:-1]
    tera_type = various.tera_types[tera_type]
    species_data[".teraType"] = tera_type

def handle_moves(line):
    moves = line.split("=")[1].strip()[:-1]
    moves = moves[1:-1].split(",")
    names = []
    for move in moves:
        move = move.strip()
        if move != "MOVE_NONE":
            names.append(move_names.names[move])
    species_data[".moves"] = names

def process_species():
    species = f'**{species_data[".species"]}**'
    if species_data[".gender"] != None:
        species = species + f'({species_data[".gender"]})'
    level = f' Lv.{species_data[".lvl"]}'
    held_item = f' @{species_data[".heldItem"]}: '
    moves = ", ".join(species_data[".moves"])
    if species_data[".status"] != None and species_data[".teraType"] != None:
        ability_nature = f' [{species_data[".ability"]}|{species_data[".nature"]}|{species_data[".teraType"]}|{species_data[".status"]}]  '
    elif species_data[".status"] != None:
        ability_nature = f' [{species_data[".ability"]}|{species_data[".nature"]}|{species_data[".status"]}]  '
    elif species_data[".teraType"] != None:
        ability_nature = f' [{species_data[".ability"]}|{species_data[".nature"]}|{species_data[".teraType"]}]  '
    else:
        ability_nature = f' [{species_data[".ability"]}|{species_data[".nature"]}]  '
    write_file(species + level + held_item + moves + ability_nature)

    species_data.update({
        ".species": None,
        ".lvl": None,
        ".heldItem": None,
        ".ability": None,
        ".nature": "Hardy",
        ".status": None,
        ".gender": None,
        ".teraType": None,
        ".moves": [],
    })

def parse_trainers():
    with open(trainer_parties, "r") as source:
        for line in source:
            if "// END" in line:
                break;

            if "// Location" in line:
                handle_location(line)
            elif "// Name" in line:
                handle_trainer_name(line)
            elif ".lvl" in line:
                handle_level(line)
            elif ".species" in line:
                handle_species(line)
            elif ".heldItem" in line:
                handle_held_item(line)
            elif ".ability" in line:
                handle_ability(line)
            elif ".nature" in line:
                handle_nature(line)
            elif ".status" in line:
                handle_status(line)
            elif ".gender" in line:
                handle_gender(line)
            elif ".teraType" in line:
                handle_tera(line)
            elif ".moves" in line:
                handle_moves(line)
                process_species()
            elif "};" in line:
                write_file("")

def try_delete_file(file):
    try:
        os.remove(file)
    except OSError:
        pass

def markdown_items_encounters(line):
    with open(MARKDOWN_OUTPUT, "a") as output:
        output.write(line)
        output.write("\n")

def html_items_encounters(line):
    with open(HTML_OUTPUT, "a") as output:
        output.write(line)
        output.write("\n")

def general_header_info():
    with open("src/general.html", "r") as general:
        for line in general:
            html_items_encounters(line[:-1])

    html_items_encounters(f'<div class="resources">')
    html_items_encounters(f'<h1>General Information [Ordered by game progression]</h1>')
    html_items_encounters(f'</div>')

def general_information():
    write_file("")
    write_file("### General Encounters")
    write_file("* Check the pokedex if you are unsure about the location.\n")

    with open(encounters, 'r') as yaml_data:
        data = yaml.safe_load(yaml_data)
        write_file("#### Lake")
        html_items_encounters(f'<div class="resources">')
        html_items_encounters("<h1>Lake</h1>")

        write_file(f'* Rod: {", ".join(data["Lake"]["Rod"])}')
        html_items_encounters(f'<p><b>Rod:</b> {", ".join(data["Lake"]["Rod"])}</p>')

        write_file(f'* Water: {", ".join(data["Lake"]["Water"])}')
        html_items_encounters(f'<p><b>Water:</b> {", ".join(data["Lake"]["Water"])}</p>')

        write_file("")

        write_file("#### Coast")
        html_items_encounters("<h1>Coast</h1>")

        write_file(f'* Rod: {", ".join(data["Coast"]["Rod"])}')
        html_items_encounters(f'<p><b>Rod:</b> {", ".join(data["Coast"]["Rod"])}</p>')

        write_file(f'* Water: {", ".join(data["Coast"]["Water"])}')
        html_items_encounters(f'<p><b>Water:</b> {", ".join(data["Coast"]["Water"])}</p>')

        write_file("")

        write_file("#### Ocean")
        html_items_encounters("<h1>Ocean</h1>")

        write_file(f'* Rod: {", ".join(data["Ocean"]["Rod"])}')
        html_items_encounters(f'<p><b>Rod:</b> {", ".join(data["Ocean"]["Rod"])}</p>')

        write_file(f'* Water: {", ".join(data["Ocean"]["Water"])}')
        html_items_encounters(f'<p><b>Water:</b> {", ".join(data["Ocean"]["Water"])}</p>')

        write_file("")
        html_items_encounters(f'</div>')

if __name__ == "__main__":
    try_delete_file(HTML_OUTPUT)
    try_delete_file(MARKDOWN_OUTPUT)
    try_delete_file(MASTERSHEET)
    write_file("## Mastersheet\n")
    general_header_info()
    general_information()
    parse_trainers()
