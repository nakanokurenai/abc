# source して使え

function run
    set name (string join '-' $argv)
    gcc -Wall -g -O0 $name.c -o $name.o
    time cat $name.in | ./$name.o | cat > $name.stdout
end

function ma
    set name (string join '-' $argv)
    if test ! -e $name.c
        echo "Copy template to $name.c"
        cp templates/tpl.c $name.c
    end
    touch $name.in
end
