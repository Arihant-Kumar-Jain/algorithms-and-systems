# 🐉 Boss 1 · The Lifetime Lich

> Unlocks after clearing chapters **2, 3, 4** · Reward **300 XP** · Fight: `./quest boss 1`

Build `DynArray`, a growable array of ints, without any standard containers. The Lich feeds on leaked memory and dangling pointers.

## Win conditions
Tick a box (`- [x]`) only when it's genuinely done. Every tick takes a chunk off the boss's HP.

- [ ] All heap memory is owned by the class (RAII): `new[]`/`delete[]` appear only inside DynArray
- [ ] `push_back` grows capacity geometrically; `size()` and `capacity()` report correctly
- [ ] `at(i)` throws `std::out_of_range` on a bad index; `operator[]` is unchecked
- [ ] Copy constructor + copy assignment do a deep copy and survive self-assignment
- [ ] Move constructor + move assignment are `noexcept` and leave the source empty but valid
- [ ] A tracing switch prints every construct / copy / move / destroy (like Chapter 4's Tracer)
- [ ] `main()` is a self-test: it checks every feature and returns 0 only if all checks pass
- [ ] Runs clean under AddressSanitizer + UBSan (the tool builds it that way automatically)

## How the fight works
- `./quest boss 1` compiles every `.cpp` in this folder (except `tests/`) with AddressSanitizer + UBSan.
- Then it runs `./boss1_lifetime_lich`, which must exit with code 0 (your self-test).
- The boss falls when **all** boxes are ticked **and** the build (plus any tests) passes.
- Run it by hand any time: `./quest run boss1 -- <args>`

## Battle notes
<!-- Design decisions, what was hard, what you'd do differently. -->
