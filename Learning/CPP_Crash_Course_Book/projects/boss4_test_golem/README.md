# 🐉 Boss 4 · The Test Golem

> Unlocks after clearing chapters **10, 11, 12** · Reward **400 XP** · Fight: `./quest boss 4`

A bank ledger, test-driven from the first line. The Golem only falls to a green test suite.

## Win conditions
Tick a box (`- [x]`) only when it's genuinely done. Every tick takes a chunk off the boss's HP.

- [ ] Your own micro test framework: a `TEST("name") { ... }` registration macro, `REQUIRE(expr)` reporting file:line, and a 'N passed / M failed' summary
- [ ] The ledger owns accounts through `std::unique_ptr`; loggers are shared through `std::shared_ptr`
- [ ] Transactions are a `std::variant<Deposit, Withdrawal, Transfer>` applied with `std::visit`
- [ ] Account lookup returns `std::optional` (or a nullable pointer) and never throws
- [ ] Every transaction is timestamped with `std::chrono`
- [ ] Storage sits behind an interface, and the tests use a hand-written fake/mock of it
- [ ] At least 12 tests, all green; `main()` returns non-zero if any test fails

## How the fight works
- `./quest boss 4` compiles every `.cpp` in this folder (except `tests/`) with AddressSanitizer + UBSan.
- Then it runs `./boss4_test_golem`, which must exit with code 0 (your self-test).
- The boss falls when **all** boxes are ticked **and** the build (plus any tests) passes.
- Run it by hand any time: `./quest run boss4 -- <args>`

## Battle notes
<!-- Design decisions, what was hard, what you'd do differently. -->
