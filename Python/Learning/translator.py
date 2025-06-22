from translate import Translator

try:
    translator = Translator(to_lang="ja")

    with open("translate.txt", mode='r') as my_file:
        translation = translator.translate(my_file.readline())
        with open("translate-ja.txt", 'w', encoding="utf-8") as my_file2:
            my_file2.write(translation)
except FileNotFoundError as e:
    print("Please check your file path correctly!")

