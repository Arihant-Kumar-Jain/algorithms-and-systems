# 🐉 Boss 3 · The Core Colossus

> Unlocks after clearing chapters **8, 9** · Reward **400 XP** · Fight: `./quest boss 3`

Part I finale. Build `rpn`, a reverse-Polish calculator: `./rpn 3 4 + 2 '*'` prints `14`.

## Win conditions
Tick a box (`- [x]`) only when it's genuinely done. Every tick takes a chunk off the boss's HP.

- [ ] Tokens come from the command line (`argc`/`argv`)
- [ ] A fixed-capacity `Stack<T, N>` template; overflow/underflow throw your own exception types
- [ ] Operators are dispatched through a table of lambdas or function pointers, not a giant if-chain
- [ ] Supports `+ - * / % ^` plus `dup`, `swap`, `drop`
- [ ] Split across translation units: stack header, evaluator header/source, `main.cpp`
- [ ] Clear error messages and a non-zero exit code on bad input
- [ ] `./rpn --test` runs at least 10 built-in cases and returns 0 when all pass

## How the fight works
- `./quest boss 3` compiles every `.cpp` in this folder (except `tests/`) with AddressSanitizer + UBSan.
- Then it runs `./boss3_core_colossus --test`, which must exit with code 0 (your self-test).
- The boss falls when **all** boxes are ticked **and** the build (plus any tests) passes.
- Run it by hand any time: `./quest run boss3 -- <args>`

## Battle notes
<!-- Design decisions, what was hard, what you'd do differently. -->
