for ((i=1;i<50;i++)) do
    python3 alok.py >input.txt
    python3 "bella ciao.py" <input.txt >out1.txt && python3 "brute bella ciao.py" <input.txt >out2.txt
    cmp out1.txt out2.txt
done