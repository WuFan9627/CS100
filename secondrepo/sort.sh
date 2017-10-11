arr=(9 3 8 2 6 1 34 7 23)
arr2=( $(for val in "${arr[@]}"
do
    echo "$val"
done | sort -n) 
)        
echo "${arr2[@]}"
