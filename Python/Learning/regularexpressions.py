import re

pattern = re.compile(r"([a-zA-Z]).([a])")
string = 'search this inside of this text please! Andrei'
pattern2 = re.compile(r"[a-zA-Z0-9$%#@]{8,}\d")
password = 'hgfdjkohngdfj9'

a = pattern.search(string)
b = pattern.findall(string)
c = pattern.fullmatch(string)
d = pattern.match(string)
print(a.group())

# At least 8 char long
# Contains any sort letters, numbers $%#@
# Has to end with a number
check = pattern2.fullmatch(password)
print(check.group())