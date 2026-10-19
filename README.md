# Conky Syntax

Syntax highlighting for Conky configuration files in Zed. This extension provides syntax highlighting only; language servers can be provided by a separate extension attached to the `Conky` language.

## Features

- `*.ck`, `*.conkyrc`, and files whose first line starts with `-- Conky:`.
- Parses the `conky.config` table with keys, strings, numbers, and booleans.
- Parses `conky.text` as a template, highlighting `${...}`, `$variable`, comments, and line continuations instead of treating the whole block as one string.

## Installation

1. Open the Extensions page in Zed.
2. Click **Install Dev Extension**.
3. Select this directory.

After publication, the extension will be available as `conky-syntax` in the Extensions page.

The grammar is fetched from this extension's public repository at the pinned revision. In a fresh checkout, the repository and the pinned commit must be reachable.

## Grammar

The grammar lives in `grammars/tree-sitter-conky` and is maintained in this repository.

## License

MIT. See `LICENSE`.
