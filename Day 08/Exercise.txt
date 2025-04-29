echo "...........Nested Loops ..........."
for((a=1; a<7; a++))
    do
    for((b=1; b<=a; b++))
        do
            echo -n $a "  "
    done
    echo "  "
done


1
2   2
3   3   3
4   4   4   4
5   5   5   5   5
6   6   6   6   6   6



for((a=1; a<7; a++))
    do
    for((b=1; b<=a; b++))
        do
            echo -n $b "  "
    done
    echo "  "
done


1
1   2
1   2   3
1   2   3   4
1   2   3   4   5
1   2   3   4   5   6


for ((i=1; i<=7; i++))
do
    for ((k=1; k<=7-i; k++))
    do
        echo -n " "
    done

    for ((j=1; j<=i; j++))
    do
        echo -n "* "
    done

    echo ""
done

      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
