package main

import (
  "fmt"
  "os"
  "bufio"
)

func main() {
  fmt.Println("窓は閉めましたよね? (y/n)")
  for {
    scanner := bufio.NewScanner(os.Stdin)
    scanner.Scan()
    c := scanner.Text()
    if c != "y" {
      fmt.Println("窓を閉めてください。鳩が入ります。")
    } else {
      break
    }
  }
  fmt.Println("お疲れ様でした。")
}
