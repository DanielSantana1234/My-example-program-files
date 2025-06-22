from PIL import Image
import sys
import os

#grab the first and second argument
folder1 = sys.argv[1]
folder2 = sys.argv[2]

#check if new/ exists, if not create it
if os.path.isdir(folder2):
    for dirpath, dirnames, filenames in os.walk(folder1):
            for filename in filenames:
                if filename.endswith('.jpg'):
                    with open(os.path.join(dirpath, filename)) as f:
                        im = Image.open(f'./{dirpath}/{filename}')
                        clean_name = os.path.splitext(filename)[0]
                        im.save(f'{folder2}/{clean_name}.png', 'png')
else:
    parentDir = r"c:\Users\Owner\Downloads\image-playground"
    path = os.path.join(parentDir, folder2)
    os.mkdir(path)
    for dirpath, dirnames, filenames in os.walk(folder1):
            for filename in filenames:
                if filename.endswith('.jpg'):
                    with open(os.path.join(dirpath, filename)) as f:
                        im = Image.open(f'./{dirpath}/{filename}')
                        clean_name = os.path.splitext(filename)[0]
                        im.save(f'{folder2}/{clean_name}.png', 'png')
#loop through Pokedex, convert images to png
#save to the new folder