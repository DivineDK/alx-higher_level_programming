#!/usr/bin/python3
def to_uper(character):
    if ord(character) >= 97 and ord(character) <= 122:
        return chr(ord(character) - 32) 
    else:
        return character 


def uppercase(str):
    new = ""
    for character in str:
        new += to_uper(character)
    print("{:s}".format(new))

