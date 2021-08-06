read -p "Enter numbers separated by 'space' : " input
sum_eve=0
sum_odd=0
for i in ${input[@]}
do
        if !(($i % 2));
        then
                ((sum_eve = sum_eve + i))
        else
                ((sum_odd = sum_odd + i))
        fi
done
((diff = sum_eve-sum_odd))
echo "$sum_eve - $sum_odd = " $diff
