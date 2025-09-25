import os
import yaml

ITEMS = "../lucid_book/src/items.md"

def write_file(line):
    with open(ITEMS, "a") as output:
        output.write(line)

def convert_items():
    with open("src/items.yaml", 'r') as item_data:
        item_data = yaml.safe_load(item_data)
        for receive_type in item_data:
            write_file(f'#### {receive_type}\n')
            for location in item_data[receive_type]:
                write_file(f'  * **{location}**\n')
                for item in item_data[receive_type][location]:
                    write_file(f'    * {item}\n')

def try_delete_file(file):
    try:
        os.remove(file)
    except OSError:
        pass

if __name__ == "__main__":
    try_delete_file(ITEMS)
    write_file("### Items\n")
    convert_items()
