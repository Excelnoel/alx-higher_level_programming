Base
Represents the "base" class for all other classes in the project. Includes:

Private class attribute __nb_objects = 0.
Public instance attribute id.
Class constructor def __init__(self, id=None):
If id is None, increments __nb_objects and assigns its value to the public instance attribute id.
Otherwise, sets the public instance attribute id to the provided id.
Static method def to_json_string(list_dictionaries): that returns the JSON string serialization of a list of dictionaries.
If list_dictionaries is None or empty, returns the string "[]".
Class method def save_to_file(cls, list_objs): that writes the JSON serialization of a list of objects to a file.
The parameter list_objs is expected to be a list of Base-inherited instances.
If list_objs is None, the function saves an empty list.
The file is saved with the name <cls name>.json (ie. Rectangle.json)
Overwrites the file if it already exists.
Static method def from_json_string(json_string): that returns a list of objects deserialized from a JSON string.
The parameter json_string is expected to be a string representing a list of dictionaries.
If json_string is None or empty, the function returns an empty list.
Class method def create(cls, **dictionary): that instantiates an object with provided attributes.
Instantiates an object with the attributes given in **dictionary.
Class method def load_from_file(cls): that returns a list of objects instantiated from a JSON file.
Reads from the JSON file <cls name>.json (ie. Rectangle.json)
If the file does not exist, the function returns an empty list.
Class method def save_to_file_csv(cls, list_objs): that writes the CSV serialization of a list of objects to a file.
The parameter list_objs is expected to be a list of Base-inherited instances.
If list_objs is None, the function saves an empty list.
The file is saved with the name <cls name>.csv (ie. Rectangle.csv)
Serializes objects in the format <id>,<width>,<height>,<x>,<y> for Rectangle objects and <id>,<size>,<x>,<y> for Square objects.
Class method def load_from_file_csv(cls): that returns a list of objects instantiated from a CSV file.
Reads from the CSV file <cls name>.csv (ie. Rectangle.csv)
If the file does not exist, the function returns an empty list.
Static method def draw(list_rectangles, list_squares): that draws Rectangle and Square instances in a GUI window using the turtle module.
The parameter list_rectangles is expected to be a list of Rectangle objects to print.
The parameter list_squares is expected to be a list of Square objects to print.
