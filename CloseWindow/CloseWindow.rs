use std::io;

fn main() {
    println!("窓は閉めましたよね？ (y/n)");
    loop {
        let mut c = String::new();
        io::stdin().read_line(&mut c).unwrap();
        if c != "y\n" {
            println!("窓を閉めて下さい。鳩が入ります。");
        } else {
            break;
        }
    }
    println!("お疲れ様でした。");
}
