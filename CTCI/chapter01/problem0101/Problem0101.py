# [1.1] Implement an algorithm to determine if a string has all unique characters.

def allUniqueChars(theString):
    # Optimization
    # if # chars > 256 then there must be duplicates
    if (len(theString) > 256):
        return 0;
    # The meat
    charCounts = [0] * 256;
    for char in theString:
        if (charCounts[ord(char)]):
            return 0;
        charCounts[ord(char)] = 1;
    return 1;

theString = "thisisastringwithrepeatingchars";
print "~Problem0101~";
print theString;
print allUniqueChars(theString);
theString = "asdfghjkl";
print theString;
print allUniqueChars(theString);
