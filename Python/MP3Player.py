import tkinter as tk
from tkinter import filedialog, PhotoImage
import time
import os


def import_file():
	file_path = filedialog.askopenfilename(title="Select a file", filetypes=[("Text files", "*.txt"), ("All files", "*.*")])
	if file_path:
		# Process the selected file (you can replace this with your own logic)
		print("Selected file:", file_path)

# Create the main Tkinter window
root = tk.Tk()
img = PhotoImage(file=r'c:\Users\Owner\Downloads\Lambda.png')
root.iconphoto(False, img)
root.title("THE CUM ZONE")
size = root.geometry("540x303")


# Create an "Import File" button
import_button = tk.Button(root, text="Import File", command=import_file)
import_button.pack(pady=100)

# Run the Tkinter event loop
root.mainloop()