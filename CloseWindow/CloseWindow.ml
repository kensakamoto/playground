print_string "窓は閉めましたよね? (y/n)" ;;

let rec closewindow = 
    let str = read_line ()
    print_string str;;

closewindow ;;