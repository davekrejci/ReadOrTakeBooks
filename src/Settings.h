#pragma once

enum DefaultAction
{
	kAuto = 0,
	kTake,
	kRead,
};

class Settings : public ISingleton<Settings>
{
public:
	bool LoadSettings();

    [[nodiscard]] DefaultAction GetDefaultAction() const;
	[[nodiscard]] Key GetHotkey() const;
	[[nodiscard]] Key GetHotkeyGamePad() const;

	bool GetAutoUseSpellTomes() const;

private:
	DefaultAction action{ kAuto };
	Key hotKey{ 42 };
	Key hotKeyGamePad{};

	bool autoUseSpellTomes{true};
};
