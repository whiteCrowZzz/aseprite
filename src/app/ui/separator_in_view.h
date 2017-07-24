// Aseprite
// Copyright (C) 2017  David Capello
//
// This program is distributed under the terms of
// the End-User License Agreement for Aseprite.

#ifndef APP_UI_SEPARATOR_IN_VIEW_H_INCLUDED
#define APP_UI_SEPARATOR_IN_VIEW_H_INCLUDED
#pragma once

#include "app/ui/skin/skin_theme.h"
#include "ui/separator.h"

namespace app {

class SeparatorInView : public ui::Separator {
public:
  SeparatorInView(const std::string& text = std::string(),
                  int align = ui::HORIZONTAL)
    : Separator(text, align) {
    setStyle(skin::SkinTheme::instance()->styles.separatorInView());
    if (text.empty())
      setBorder(border() + gfx::Border(0, 2, 0, 2)*ui::guiscale());
  }
};

} // namespace app

#endif
