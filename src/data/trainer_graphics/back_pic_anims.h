static const union AnimCmd gAnimCmd_5Frames[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd gAnimCmd_4Frames[] =
{
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 24),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd *const sBackAnims_5Frames[] =
{
    sAnim_GeneralFrame0,
    gAnimCmd_5Frames,
};

static const union AnimCmd *const sBackAnims_4Frames[] =
{
    sAnim_GeneralFrame0,
    gAnimCmd_4Frames,
};

const union AnimCmd *const *const gTrainerBackAnimsPtrTable[] =
{
    [TRAINER_BACK_PIC_RED] = sBackAnims_5Frames,
    [TRAINER_BACK_PIC_LEAF] = sBackAnims_5Frames,
    [TRAINER_BACK_PIC_WALLY] = sBackAnims_4Frames,
    [TRAINER_BACK_PIC_STEVEN] = sBackAnims_4Frames,
    [TRAINER_BACK_PIC_BRENDAN] = sBackAnims_4Frames,
    [TRAINER_BACK_PIC_MAY] = sBackAnims_4Frames,
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN] = sBackAnims_4Frames,
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY] = sBackAnims_4Frames,
};
