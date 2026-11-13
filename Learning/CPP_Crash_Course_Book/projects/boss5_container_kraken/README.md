# 🐉 Boss 5 · The Container Kraken

> Unlocks after clearing chapters **13, 14, 15** · Reward **400 XP** · Fight: `./quest boss 5`

Build `kvdb`, an in-memory key-value store with a command prompt. Commands arrive on stdin, one per line.

## Win conditions
Tick a box (`- [x]`) only when it's genuinely done. Every tick takes a chunk off the boss's HP.

- [ ] Commands: `SET k v`, `GET k`, `DEL k`, `INCR k`, `COUNT`, `KEYS <regex>`, `HISTORY n`, `QUIT`
- [ ] Storage is a `std::unordered_map`; `KEYS` output is sorted
- [ ] Parsing uses `std::string_view` (no copies until a value is stored)
- [ ] `KEYS` matches with `std::regex`
- [ ] `HISTORY n` shows the last n commands from a bounded `std::deque`
- [ ] Works in script mode: `kvdb < script.txt`
- [ ] At least 3 test pairs in `tests/` (`name.in` → expected `name.out`) — the tool pipes and diffs them

## How the fight works
- `./quest boss 5` compiles every `.cpp` in this folder (except `tests/`) with AddressSanitizer + UBSan.
- Then every `tests/<name>.in` is piped into the program and the output is compared with `tests/<name>.out`.
- The boss falls when **all** boxes are ticked **and** the build (plus any tests) passes.
- Run it by hand any time: `./quest run boss5 -- <args>`

## Protocol (what the tests expect)
| Command | Output |
|---|---|
| `SET k v` | `OK` |
| `GET k` | the value, or `(nil)` |
| `DEL k` | `1` if removed, else `0` |
| `INCR k` | the new integer value (missing keys start at 0) |
| `COUNT` | number of keys |
| `KEYS <regex>` | matching keys, sorted, one per line |
| `HISTORY n` | last n commands, oldest first |
| `QUIT` | exits (no output) |

Unknown commands print `ERR unknown command`.

## Battle notes
<!-- Design decisions, what was hard, what you'd do differently. -->
