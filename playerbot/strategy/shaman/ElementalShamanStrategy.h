#pragma once
#include "ShamanStrategy.h"

namespace ai
{
    class ElementalShamanPlaceholderStrategy : public SpecPlaceholderStrategy
    {
    public:
        ElementalShamanPlaceholderStrategy(PlayerbotAI* ai) : SpecPlaceholderStrategy(ai) {}
        string getName() override { return "elemental"; }
    };

    class ElementalShamanStrategy : public ShamanStrategy
    {
    public:
        ElementalShamanStrategy(PlayerbotAI* ai);

    protected:
        virtual void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        virtual void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
        virtual void InitReactionTriggers(std::list<TriggerNode*>& triggers) override;
        virtual void InitDeadTriggers(std::list<TriggerNode*>& triggers) override;

        virtual NextAction** GetDefaultCombatActions() override;
    };

    class ElementalShamanPveStrategy : public ElementalShamanStrategy
    {
    public:
        ElementalShamanPveStrategy(PlayerbotAI* ai) : ElementalShamanStrategy(ai) {}
        std::string getName() override { return "elemental pve"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitReactionTriggers(std::list<TriggerNode*>& triggers) override;
        void InitDeadTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanPvpStrategy : public ElementalShamanStrategy
    {
    public:
        ElementalShamanPvpStrategy(PlayerbotAI* ai) : ElementalShamanStrategy(ai) {}
        std::string getName() override { return "elemental pvp"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitReactionTriggers(std::list<TriggerNode*>& triggers) override;
        void InitDeadTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanBossStrategy : public ElementalShamanStrategy
    {
    public:
        ElementalShamanBossStrategy(PlayerbotAI* ai) : ElementalShamanStrategy(ai) {}
        std::string getName() override { return "elemental boss"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitReactionTriggers(std::list<TriggerNode*>& triggers) override;
        void InitDeadTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanAoeStrategy : public ShamanAoeStrategy
    {
    public:
        ElementalShamanAoeStrategy(PlayerbotAI* ai) : ShamanAoeStrategy(ai) {}

    protected:
        virtual void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        virtual void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanAoePveStrategy : public ElementalShamanAoeStrategy
    {
    public:
        ElementalShamanAoePveStrategy(PlayerbotAI* ai) : ElementalShamanAoeStrategy(ai) {}
        string getName() override { return "aoe elemental pve"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanAoePvpStrategy : public ElementalShamanAoeStrategy
    {
    public:
        ElementalShamanAoePvpStrategy(PlayerbotAI* ai) : ElementalShamanAoeStrategy(ai) {}
        string getName() override { return "aoe elemental pvp"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanAoeBossStrategy : public ElementalShamanAoeStrategy
    {
    public:
        ElementalShamanAoeBossStrategy(PlayerbotAI* ai) : ElementalShamanAoeStrategy(ai) {}
        string getName() override { return "aoe elemental boss"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanCureStrategy : public ShamanCureStrategy
    {
    public:
        ElementalShamanCureStrategy(PlayerbotAI* ai) : ShamanCureStrategy(ai) {}

    protected:
        virtual void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        virtual void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanCurePveStrategy : public ElementalShamanCureStrategy
    {
    public:
        ElementalShamanCurePveStrategy(PlayerbotAI* ai) : ElementalShamanCureStrategy(ai) {}
        string getName() override { return "cure elemental pve"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanCurePvpStrategy : public ElementalShamanCureStrategy
    {
    public:
        ElementalShamanCurePvpStrategy(PlayerbotAI* ai) : ElementalShamanCureStrategy(ai) {}
        string getName() override { return "cure elemental pvp"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanCureBossStrategy : public ElementalShamanCureStrategy
    {
    public:
        ElementalShamanCureBossStrategy(PlayerbotAI* ai) : ElementalShamanCureStrategy(ai) {}
        string getName() override { return "cure elemental boss"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanTotemsStrategy : public ShamanTotemsStrategy
    {
    public:
        ElementalShamanTotemsStrategy(PlayerbotAI* ai) : ShamanTotemsStrategy(ai) {}

    protected:
        virtual void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        virtual void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanTotemsPveStrategy : public ElementalShamanTotemsStrategy
    {
    public:
        ElementalShamanTotemsPveStrategy(PlayerbotAI* ai) : ElementalShamanTotemsStrategy(ai) {}
        string getName() override { return "totems elemental pve"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanTotemsPvpStrategy : public ElementalShamanTotemsStrategy
    {
    public:
        ElementalShamanTotemsPvpStrategy(PlayerbotAI* ai) : ElementalShamanTotemsStrategy(ai) {}
        string getName() override { return "totems elemental pvp"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };

    class ElementalShamanTotemsBossStrategy : public ElementalShamanTotemsStrategy
    {
    public:
        ElementalShamanTotemsBossStrategy(PlayerbotAI* ai) : ElementalShamanTotemsStrategy(ai) {}
        string getName() override { return "totems elemental boss"; }

    private:
        void InitCombatTriggers(std::list<TriggerNode*>& triggers) override;
        void InitNonCombatTriggers(std::list<TriggerNode*>& triggers) override;
    };
}