# -*- coding: cp949 -*- 
import os
import pickle
from tkinter import *
from tkinter import messagebox

# ������
NAMEINDEX = 0       # �̸� �ε���
PHONEINDEX = 1      # �ڵ��� ��ȣ �ε���

filename = "phone_book.dat"
now_turn = 0        # 1 ~ len(dictionary), ��ư���� ����������
size = 0            # 1 ~ len(dictionary), �߰��� ������ ���� �̻� �� ����
obj = {}

def add() :
    global size, now_turn, obj
    name = nameE.get()
    phone = phoneE.get()

    size += 1
    now_turn += 1

    out_file = open(filename, "wb")
    obj[size] = [name, phone]
    pickle.dump(obj, out_file)
    out_file.close()

def frist() :
    global now_turn
    now_turn = 1
    setEntry(now_turn)

def after() :
    global now_turn

    if now_turn == size :
        now_turn = 1
    else :
        now_turn += 1

    setEntry(now_turn)

def before() :
    global now_turn

    if now_turn == 1 :
        now_turn = size
    else :
        now_turn -= 1
        
    setEntry(now_turn)

def end() :
    global now_turn
    now_turn = size
    setEntry(now_turn)

def fileread() :
    global size, now_turn, obj
    
    if getIsFile() :
        infile = open(filename, "rb")
        obj = pickle.load(infile)
        size = len(obj)
        now_turn = size
        infile.close()
        setEntry(1)

def getIsFile() :
    if os.path.isfile(filename) :
        return True
    else :
        messagebox.showinfo("����", filename + "�� �����ϴ�.")
        return False

def setEntry(turn) :
    name = obj[turn][NAMEINDEX]
    phone = obj[turn][PHONEINDEX]
    nameE.delete(0, END)
    phoneE.delete(0, END)
    nameE.insert(0, name)
    phoneE.insert(0, phone)

window = Tk()

nameL = Label(window, text = "�̸�")
nameL.grid(row = 0, column = 0, columnspan = 2)
nameE = Entry(window)
nameE.grid(row = 0, column = 2, columnspan = 4)

phoneL = Label(window, text = "��ȭ��ȣ")
phoneL.grid(row = 1, column = 0, columnspan = 2)
phoneE = Entry(window)
phoneE.grid(row = 1, column = 2, columnspan = 4)

addB = Button(window, text = "�߰�", command = add)
addB.grid(row = 2, column = 0)

fristB = Button(window, text = "ó��", command = frist)
fristB.grid(row = 2, column = 1)

afterB = Button(window, text = "����", command = after)
afterB.grid(row = 2, column = 2)

beforeB = Button(window, text = "����", command = before)
beforeB.grid(row = 2, column = 3)

endB = Button(window, text = "������", command = end)
endB.grid(row = 2, column = 4)

loadfileB = Button(window, text = "���� �б�", command = fileread)
loadfileB.grid(row = 2, column = 5)

window.mainloop()