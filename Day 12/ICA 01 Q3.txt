read -p "Enter String_1: " string1
read -p "Enter String_2: " string2

len1=${#string1}
len2=${#string2}

if [ $len1 -gt $len2 ]; then
    echo "$string1 is larger than $string2"
elif [ $len1 -lt $len2 ]; then
    echo "$string2 is larger than $string1"
else
    echo "Both strings are of the same length"
fi
