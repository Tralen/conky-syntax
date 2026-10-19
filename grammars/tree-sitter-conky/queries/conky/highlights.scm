; Comments
(lua_comment) @comment
(text_comment) @comment

; Configuration block
"conky.config" @keyword
"conky.text" @keyword
(config_block "{" @punctuation.bracket)
(config_block "}" @punctuation.bracket)
(config_entry key: (identifier) @property)
(config_value (string) @string)
(config_value (number) @number)
(config_value (boolean) @boolean)
(config_value (identifier) @constant)

; Text block delimiters
(text_block "[[" @punctuation.bracket)
(text_block "]]" @punctuation.bracket)

; Text substitutions
(text_variable "${" @punctuation.bracket)
(text_variable "}" @punctuation.bracket)
(text_variable name: (text_command) @function)
(text_variable args: (text_arguments) @string.special)
(text_variable_short "$" @punctuation.bracket)
(text_variable_short name: (text_command) @variable)
(text_dollar) @string.escape
(text_dollar_literal) @string.escape
(text_continuation) @string.escape
(text_backslash) @string.escape
