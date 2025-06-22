from PIL import Image, ImageFilter, ImageWin

im = Image.open('./Pokedex/pikachu.jpg')

filtered_im = im.filter(ImageFilter.SMOOTH)
filtered_im = im.convert('L')
filtered_im.save("blur.png", 'png')

resize = filtered_im.resize((300, 300))
resize.save("grey.png", "png")
exif = im.getexif()
Hello = Image.Exif()
Hello.get_ifd
Bye = Image.Image()

box = (100, 100, 400, 400)
region = filtered_im.crop(box)
region.save("resized.png", "png")

exif.get_ifd

im1 = Image.open('./astro.jpg')
im1.thumbnail((400,400))
im1.save("thumbnail.jpg")