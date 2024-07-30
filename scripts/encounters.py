import os
import yaml

encounters = "../lucid_book/docs/encounters.md"

def write_file(line):
    with open(encounters, "a") as output:
        output.write(line)


def convert_encounters():
    with open("../encounters.yaml", 'r') as yaml_data:
        data = yaml.safe_load(yaml_data)
        for item in data:
            write_file(f'## {item}\n')
            for method in data[item]:
                write_file(f'### {method}\n')
                try:
                    for encounter in data[item][method]:
                        write_file(f'* {encounter}\n')
                except:
                    pass

def try_delete_file(file):
    try:
        os.remove(file)
    except OSError:
        pass

if __name__ == "__main__":
    try_delete_file(encounters)
    convert_encounters()