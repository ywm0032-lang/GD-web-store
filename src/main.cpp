#include <Geode/Geode.hpp>
#include <Geode/ui/GeodeUI.hpp>

using namespace geode::prelude;

class GDWebStorePopup : public geode::Popup<> {
protected:
    bool setup() override {
        this->setTitle("GD Web Store");

        auto label = CCLabelBMFont::create(
            "Welcome to GD Web Store!
Extension support coming soon.",
            "bigFont.fnt"
        );
        label->setScale(0.5f);
        label->setPosition(m_mainLayer->getContentSize() / 2);
        m_mainLayer->addChild(label);

        return true;
    }
};

class $modify(GDWebStoreMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto button = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("GD Web Store"),
            this,
            menu_selector(GDWebStoreMenuLayer::onOpenStore)
        );

        button->setID("ywm03mainacc.gd-web-store/open-button");

        auto menu = this->getChildByID("bottom-menu");
        if (menu) {
            menu->addChild(button);
            button->setPosition({ 0, -45 });
        }

        return true;
    }

    void onOpenStore(CCObject*) {
        GDWebStorePopup::create(280, 160)->show();
    }
};
