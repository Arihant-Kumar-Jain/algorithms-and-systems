# 🐉 Boss 7 · The Parallel Wraith

> Unlocks after clearing chapters **18, 19** · Reward **400 XP** · Fight: `./quest boss 7`

Build `wordstorm`, a parallel word-frequency counter for a whole directory of text.

## Win conditions
Tick a box (`- [x]`) only when it's genuinely done. Every tick takes a chunk off the boss's HP.

- [ ] A fixed-size thread pool built on your thread-safe queue from 19-3/19-4
- [ ] Workers count words into per-thread maps that are merged at the end (no global lock in the hot loop)
- [ ] Top-K words via `std::partial_sort`
- [ ] Prints the timing for 1 thread vs N threads and the speedup
- [ ] Clean shutdown; no data races under ThreadSanitizer (the tool builds it with -fsanitize=thread)
- [ ] Uses at least 5 different `<algorithm>`/`<numeric>` functions in meaningful places

## How the fight works
- `./quest boss 7` compiles every `.cpp` in this folder (except `tests/`) with ThreadSanitizer.
- The boss falls when **all** boxes are ticked **and** the build (plus any tests) passes.
- Run it by hand any time: `./quest run boss7 -- <args>`

## Battle notes
<!-- Design decisions, what was hard, what you'd do differently. -->
