.data
_Prompt: .asciiz "Enter an integer:  "
_ret: .asciiz "\n"
.globl main
.text
read:
  li $v0,4
  la $a0,_Prompt
  syscall
  li $v0,5
  syscall
  jr $ra
write:
  li $v0,1
  syscall
  li $v0,4
  la $a0,_ret
  syscall
  move $v0,$0
  jr $ra

main:
  addi $sp, $sp, -24
  li $t3, 3
  sw $t3, 16($sp)
  lw $t1, 3581554($sp)
  move $t3, $t1
  sw $t3, -850814($sp)
  li $t3, 0
  sw $t3, 20($sp)
  lw $v0,20($sp)
  jr $ra
label1:
