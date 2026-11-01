# GD Web Store
**Developer:** Ywm03Mainacc  
**GitHub:** [ywm0032-lang](https://github.com/ywm0032-lang)

**GD Web Store** is an independent, fan-made extension platform for
[Geode](https://geode-sdk.org), inspired by the Chrome Web Store model.

It will let users install small, permission-scoped `.gdext` extensions that
run in a restricted sandbox exposed by the GD Web Store host mod.

> GD Web Store is not affiliated with or endorsed by RobTop Games.  
> Geometry Dash is a trademark of RobTop Games.

## Features

- Extension store interface
- Permission-based extension system
- Sandboxed extension runtime
- Local extension management
- Safe APIs for notifications, popups, storage, and level information

## Extension permissions

Extensions must declare the capabilities they use in `gdext.json`.

Planned capabilities include:

- `ui.popup`
- `ui.notification`
- `storage.local`
- `events.level.open`
- `level.info.read`

Extensions will not be allowed to access the filesystem, network, native code,
Geometry Dash internals, or install additional code.

## Status

**Early development.**

Current goal: create a working Geode mod that displays the GD Web Store popup
and builds automatically with GitHub Actions.

## Development

This project is developed for Geode. The mod ID is:

```text
ywm03mainacc.gd-web-store
