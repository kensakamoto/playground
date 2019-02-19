puts "窓は閉めましたよね? (y/n)"
while true do 
  c = gets.chomp
  if !(c == 'y') then 
    puts "窓を閉めてください。鳩が入ります。"
  else
    break
  end
end
puts "お疲れ様でした。"