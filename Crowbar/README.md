# Crowbar
自制无类型语言

## 编码规范
- Crowbar主程序 (CRB)
- 内存管理模块 (MEM)
- Debug模块 (DBG)

### 命名规范

1. 模块必须有前缀3个字母的缩写（如： CRB）。
2. 类型名，以大写字母开始，并使用下划线连接单词（如： CRB_Interpreter）。
3. 变量名/函数名，全部使用小写字母，使用下划线连接单词（如： alloc_expression()）
。
4. 宏命名为全大写字母，使用下划线连接单词（如：IDENTIFIER_TABLE_ALLOC_
SIZE）。但如果是带参数的宏，特别是具有函数功能的部分，则要遵循函数的命
名规则（如： small(a, b)）。
5. 模块中向外公开的函数， 命名以模块名（ 大写字母） + 下划线作为前缀
（如： CRB_create_interpreter()）。
6. 模块中不对外公开的函数，如果函数的作用域跨文件时，则函数名以模块名（小
写字母） + 下划线作为前缀（如： crb_alloc_expression()）。
7. 函数外的静态变量名以 st_作为前缀（如： st_string_literal_buffer）。

