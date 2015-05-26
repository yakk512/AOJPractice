g++ -o test ${1}.cpp -lm
./test < input1.txt > output1.txt
diff output1.txt answer1.txt > log.txt
if test $? -eq 0 ; then
    echo "test is pass!!!"
else
    echo  $'\e[31m test is failed!!! \e[m'
fi

