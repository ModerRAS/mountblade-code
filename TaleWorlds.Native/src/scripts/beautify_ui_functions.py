#!/usr/bin/env python3
"""
UI系统函数美化脚本
用于批量重命名04_ui_system.c文件中的FUN_函数
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def generate_function_name(address):
    """根据函数地址生成语义化函数名"""
    # 将地址转换为数字
    try:
        addr_num = int(address, 16)
    except:
        return f"Function_{address}"
    
    # 根据地址范围推断函数功能
    if 0x180650000 <= addr_num <= 0x180653000:
        return f"UIInitialize_{address}"
    elif 0x180653000 <= addr_num <= 0x180657000:
        return f"UIRender_{address}"
    elif 0x180657000 <= addr_num <= 0x18065b000:
        return f"UIEvent_{address}"
    elif 0x18065b000 <= addr_num <= 0x18065f000:
        return f"UILayout_{address}"
    elif 0x18065f000 <= addr_num <= 0x180663000:
        return f"UIInput_{address}"
    elif 0x180663000 <= addr_num <= 0x180667000:
        return f"UIAnimation_{address}"
    elif 0x180667000 <= addr_num <= 0x18066b000:
        return f"UITexture_{address}"
    elif 0x18066b000 <= addr_num <= 0x18066f000:
        return f"UIFont_{address}"
    elif 0x18066f000 <= addr_num <= 0x180673000:
        return f"UIShader_{address}"
    elif 0x180673000 <= addr_num <= 0x180677000:
        return f"UIBuffer_{address}"
    elif 0x180677000 <= addr_num <= 0x18067b000:
        return f"UIMemory_{address}"
    elif 0x18067b000 <= addr_num <= 0x18067f000:
        return f"UIThread_{address}"
    elif 0x18067f000 <= addr_num <= 0x180683000:
        return f"UIWindow_{address}"
    elif 0x180683000 <= addr_num <= 0x180687000:
        return f"UIWidget_{address}"
    elif 0x180687000 <= addr_num <= 0x18068b000:
        return f"UIDialog_{address}"
    elif 0x18068b000 <= addr_num <= 0x18068f000:
        return f"UITooltip_{address}"
    elif 0x18068f000 <= addr_num <= 0x180693000:
        return f"UICursor_{address}"
    elif 0x180693000 <= addr_num <= 0x180697000:
        return f"UIFocus_{address}"
    elif 0x180697000 <= addr_num <= 0x18069b000:
        return f"UIScroll_{address}"
    elif 0x18069b000 <= addr_num <= 0x18069f000:
        return f"UIDrag_{address}"
    elif 0x18069f000 <= addr_num <= 0x1806a3000:
        return f"UIDrop_{address}"
    elif 0x1806a3000 <= addr_num <= 0x1806a7000:
        return f"UIResize_{address}"
    elif 0x1806a7000 <= addr_num <= 0x1806ab000:
        return f"UIStyle_{address}"
    elif 0x1806ab000 <= addr_num <= 0x1806af000:
        return f"UITheme_{address}"
    elif 0x1806af000 <= addr_num <= 0x1806b3000:
        return f"UIColor_{address}"
    elif 0x1806b3000 <= addr_num <= 0x1806b7000:
        return f"UIFontMetrics_{address}"
    elif 0x1806b7000 <= addr_num <= 0x1806bb000:
        return f"UIEffect_{address}"
    elif 0x1806bb000 <= addr_num <= 0x1806bf000:
        return f"UITransition_{address}"
    elif 0x1806bf000 <= addr_num <= 0x1806c3000:
        return f"UILayoutEngine_{address}"
    elif 0x1806c3000 <= addr_num <= 0x1806c7000:
        return f"UIConstraint_{address}"
    elif 0x1806c7000 <= addr_num <= 0x1806cb000:
        return f"UIAlignment_{address}"
    elif 0x1806cb000 <= addr_num <= 0x1806cf000:
        return f"UIPadding_{address}"
    elif 0x1806cf000 <= addr_num <= 0x1806d3000:
        return f"UIMargin_{address}"
    elif 0x1806d3000 <= addr_num <= 0x1806d7000:
        return f"UIBorder_{address}"
    elif 0x1806d7000 <= addr_num <= 0x1806db000:
        return f"UIBackground_{address}"
    elif 0x1806db000 <= addr_num <= 0x1806df000:
        return f"UIForeground_{address}"
    elif 0x1806df000 <= addr_num <= 0x1806e3000:
        return f"UIOpacity_{address}"
    elif 0x1806e3000 <= addr_num <= 0x1806e7000:
        return f"UIRotation_{address}"
    elif 0x1806e7000 <= addr_num <= 0x1806eb000:
        return f"UIScale_{address}"
    elif 0x1806eb000 <= addr_num <= 0x1806ef000:
        return f"UITransform_{address}"
    elif 0x1806ef000 <= addr_num <= 0x1806f3000:
        return f"UIProjection_{address}"
    elif 0x1806f3000 <= addr_num <= 0x1806f7000:
        return f"UIViewport_{address}"
    elif 0x1806f7000 <= addr_num <= 0x1806fb000:
        return f"UIClip_{address}"
    elif 0x1806fb000 <= addr_num <= 0x1806ff000:
        return f"UILayer_{address}"
    elif 0x1806ff000 <= addr_num <= 0x180703000:
        return f"UIComposite_{address}"
    elif 0x180703000 <= addr_num <= 0x180707000:
        return f"UIBlend_{address}"
    elif 0x180707000 <= addr_num <= 0x18070b000:
        return f"UIFilter_{address}"
    elif 0x18070b000 <= addr_num <= 0x18070f000:
        return f"UIMask_{address}"
    elif 0x18070f000 <= addr_num <= 0x180713000:
        return f"UIStencil_{address}"
    elif 0x180713000 <= addr_num <= 0x180717000:
        return f"UIDepth_{address}"
    elif 0x180717000 <= addr_num <= 0x18071b000:
        return f"UIZOrder_{address}"
    elif 0x18071b000 <= addr_num <= 0x18071f000:
        return f"UIVisibility_{address}"
    elif 0x18071f000 <= addr_num <= 0x180723000:
        return f"UIHitTest_{address}"
    elif 0x180723000 <= addr_num <= 0x180727000:
        return f"UIRaycast_{address}"
    elif 0x180727000 <= addr_num <= 0x18072b000:
        return f"UIPick_{address}"
    elif 0x18072b000 <= addr_num <= 0x18072f000:
        return f"UISelect_{address}"
    elif 0x18072f000 <= addr_num <= 0x180733000:
        return f"UIHighlight_{address}"
    elif 0x180733000 <= addr_num <= 0x180737000:
        return f"UIFocusRect_{address}"
    elif 0x180737000 <= addr_num <= 0x18073b000:
        return f"UICaret_{address}"
    elif 0x18073b000 <= addr_num <= 0x18073f000:
        return f"UICursorBlink_{address}"
    elif 0x18073f000 <= addr_num <= 0x180743000:
        return f"UITextSelection_{address}"
    elif 0x180743000 <= addr_num <= 0x180747000:
        return f"UITextEditing_{address}"
    elif 0x180747000 <= addr_num <= 0x18074b000:
        return f"UIInputMethod_{address}"
    elif 0x18074b000 <= addr_num <= 0x18074f000:
        return f"UIKeyboard_{address}"
    elif 0x18074f000 <= addr_num <= 0x180753000:
        return f"UIMouse_{address}"
    elif 0x180753000 <= addr_num <= 0x180757000:
        return f"UITouch_{address}"
    elif 0x180757000 <= addr_num <= 0x18075b000:
        return f"UIGesture_{address}"
    elif 0x18075b000 <= addr_num <= 0x18075f000:
        return f"UIAccelerometer_{address}"
    elif 0x18075f000 <= addr_num <= 0x180763000:
        return f"UIGyroscope_{address}"
    elif 0x180763000 <= addr_num <= 0x180767000:
        return f"UICompass_{address}"
    elif 0x180767000 <= addr_num <= 0x18076b000:
        return f"UILocation_{address}"
    elif 0x18076b000 <= addr_num <= 0x18076f000:
        return f"UINotification_{address}"
    elif 0x18076f000 <= addr_num <= 0x180773000:
        return f"UIAlert_{address}"
    elif 0x180773000 <= addr_num <= 0x180777000:
        return f"UIConfirmation_{address}"
    elif 0x180777000 <= addr_num <= 0x18077b000:
        return f"UIMenu_{address}"
    elif 0x18077b000 <= addr_num <= 0x18077f000:
        return f"UIContextMenu_{address}"
    elif 0x18077f000 <= addr_num <= 0x180783000:
        return f"UIToolbar_{address}"
    elif 0x180783000 <= addr_num <= 0x180787000:
        return f"UIStatusBar_{address}"
    elif 0x180787000 <= addr_num <= 0x18078b000:
        return f"UITitleBar_{address}"
    elif 0x18078b000 <= addr_num <= 0x18078f000:
        return f"UITabBar_{address}"
    elif 0x18078f000 <= addr_num <= 0x180793000:
        return f"UINavigationBar_{address}"
    elif 0x180793000 <= addr_num <= 0x180797000:
        return f"UISearchBar_{address}"
    elif 0x180797000 <= addr_num <= 0x18079b000:
        return f"UISegmentedControl_{address}"
    elif 0x18079b000 <= addr_num <= 0x18079f000:
        return f"UISlider_{address}"
    elif 0x18079f000 <= addr_num <= 0x1807a3000:
        return f"UIProgress_{address}"
    elif 0x1807a3000 <= addr_num <= 0x1807a7000:
        return f"UIActivityIndicator_{address}"
    elif 0x1807a7000 <= addr_num <= 0x1807ab000:
        return f"UISwitch_{address}"
    elif 0x1807ab000 <= addr_num <= 0x1807af000:
        return f"UICheckbox_{address}"
    elif 0x1807af000 <= addr_num <= 0x1807b3000:
        return f"UIRadioButton_{address}"
    elif 0x1807b3000 <= addr_num <= 0x1807b7000:
        return f"UIButton_{address}"
    elif 0x1807b7000 <= addr_num <= 0x1807bb000:
        return f"UILabel_{address}"
    elif 0x1807bb000 <= addr_num <= 0x1807bf000:
        return f"UITextField_{address}"
    elif 0x1807bf000 <= addr_num <= 0x1807c3000:
        return f"UITextView_{address}"
    elif 0x1807c3000 <= addr_num <= 0x1807c7000:
        return f"UIImageView_{address}"
    elif 0x1807c7000 <= addr_num <= 0x1807cb000:
        return f"UIWebView_{address}"
    elif 0x1807cb000 <= addr_num <= 0x1807cf000:
        return f"UICollectionView_{address}"
    elif 0x1807cf000 <= addr_num <= 0x1807d3000:
        return f"UITableView_{address}"
    elif 0x1807d3000 <= addr_num <= 0x1807d7000:
        return f"UIScrollView_{address}"
    elif 0x1807d7000 <= addr_num <= 0x1807db000:
        return f"UIPageControl_{address}"
    elif 0x1807db000 <= addr_num <= 0x1807df000:
        return f"UICarousel_{address}"
    elif 0x1807df000 <= addr_num <= 0x1807e3000:
        return f"UIGrid_{address}"
    elif 0x1807e3000 <= addr_num <= 0x1807e7000:
        return f"UIStack_{address}"
    elif 0x1807e7000 <= addr_num <= 0x1807eb000:
        return f"UIFlexBox_{address}"
    elif 0x1807eb000 <= addr_num <= 0x1807ef000:
        return f"UIGridLayout_{address}"
    elif 0x1807ef000 <= addr_num <= 0x1807f3000:
        return f"UIFlowLayout_{address}"
    elif 0x1807f3000 <= addr_num <= 0x1807f7000:
        return f"UIAbsoluteLayout_{address}"
    elif 0x1807f7000 <= addr_num <= 0x1807fb000:
        return f"UIRelativeLayout_{address}"
    elif 0x1807fb000 <= addr_num <= 0x1807ff000:
        return f"UIConstraintLayout_{address}"
    elif 0x1807ff000 <= addr_num <= 0x180803000:
        return f"UIDynamicLayout_{address}"
    elif 0x180803000 <= addr_num <= 0x180807000:
        return f"UIAdaptiveLayout_{address}"
    elif 0x180807000 <= addr_num <= 0x18080b000:
        return f"UIResponsiveLayout_{address}"
    elif 0x18080b000 <= addr_num <= 0x18080f000:
        return f"UIMultiScreenLayout_{address}"
    elif 0x18080f000 <= addr_num <= 0x180813000:
        return f"UIDeviceRotation_{address}"
    elif 0x180813000 <= addr_num <= 0x180817000:
        return f"UIInterfaceOrientation_{address}"
    elif 0x180817000 <= addr_num <= 0x18081b000:
        return f"UISafeArea_{address}"
    elif 0x18081b000 <= addr_num <= 0x18081f000:
        return f"UIStatusBarInset_{address}"
    elif 0x18081f000 <= addr_num <= 0x180823000:
        return f"UINavigationBarHeight_{address}"
    elif 0x180823000 <= addr_num <= 0x180827000:
        return f"UITabBarHeight_{address}"
    elif 0x180827000 <= addr_num <= 0x18082b000:
        return f"UIToolbarHeight_{address}"
    elif 0x18082b000 <= addr_num <= 0x18082f000:
        return f"UIKeyboardInset_{address}"
    elif 0x18082f000 <= addr_num <= 0x180833000:
        return f"UIMarginLayout_{address}"
    elif 0x180833000 <= addr_num <= 0x180837000:
        return f"UIPaddingLayout_{address}"
    elif 0x180837000 <= addr_num <= 0x18083b000:
        return f"UIBorderLayout_{address}"
    elif 0x18083b000 <= addr_num <= 0x18083f000:
        return f"UICornerRadius_{address}"
    elif 0x18083f000 <= addr_num <= 0x180843000:
        return f"UIShadow_{address}"
    elif 0x180843000 <= addr_num <= 0x180847000:
        return f"UIBlur_{address}"
    elif 0x180847000 <= addr_num <= 0x18084b000:
        return f"UITint_{address}"
    elif 0x18084b000 <= addr_num <= 0x18084f000:
        return f"UIOverlay_{address}"
    elif 0x18084f000 <= addr_num <= 0x180853000:
        return f"UIModal_{address}"
    elif 0x180853000 <= addr_num <= 0x180857000:
        return f"UIPopover_{address}"
    elif 0x180857000 <= addr_num <= 0x18085b000:
        return f"UISheet_{address}"
    elif 0x18085b000 <= addr_num <= 0x18085f000:
        return f"UIFullScreen_{address}"
    elif 0x18085f000 <= addr_num <= 0x180863000:
        return f"UISplitScreen_{address}"
    elif 0x180863000 <= addr_num <= 0x180867000:
        return f"UIMultiWindow_{address}"
    elif 0x180867000 <= addr_num <= 0x18086b000:
        return f"UIDragAndDrop_{address}"
    elif 0x18086b000 <= addr_num <= 0x18086f000:
        return f"UICopyPaste_{address}"
    elif 0x18086f000 <= addr_num <= 0x180873000:
        return f"UIUndoRedo_{address}"
    elif 0x180873000 <= addr_num <= 0x180877000:
        return f"UITextFormat_{address}"
    elif 0x180877000 <= addr_num <= 0x18087b000:
        return f"UIFontStyle_{address}"
    elif 0x18087b000 <= addr_num <= 0x18087f000:
        return f"UITextAlignment_{address}"
    elif 0x18087f000 <= addr_num <= 0x180883000:
        return f"UILineBreak_{address}"
    elif 0x180883000 <= addr_num <= 0x180887000:
        return f"UITextTruncation_{address}"
    elif 0x180887000 <= addr_num <= 0x18088b000:
        return f"UITextWrapping_{address}"
    elif 0x18088b000 <= addr_num <= 0x18088f000:
        return f"UITextEllipsis_{address}"
    elif 0x18088f000 <= addr_num <= 0x180893000:
        return f"UITextBaseline_{address}"
    elif 0x180893000 <= addr_num <= 0x180897000:
        return f"UITextDecoration_{address}"
    elif 0x180897000 <= addr_num <= 0x18089b000:
        return f"UITextTransform_{address}"
    elif 0x18089b000 <= addr_num <= 0x18089f000:
        return f"UITextCase_{address}"
    elif 0x18089f000 <= addr_num <= 0x1808a3000:
        return f"UITextSpacing_{address}"
    elif 0x1808a3000 <= addr_num <= 0x1808a7000:
        return f"UITextKerning_{address}"
    elif 0x1808a7000 <= addr_num <= 0x1808ab000:
        return f"UITextLigature_{address}"
    elif 0x1808ab000 <= addr_num <= 0x1808af000:
        return f"UITextTracking_{address}"
    elif 0x1808af000 <= addr_num <= 0x1808b3000:
        return f"UITextLeading_{address}"
    elif 0x1808b3000 <= addr_num <= 0x1808b7000:
        return f"UITextParagraph_{address}"
    elif 0x1808b7000 <= addr_num <= 0x1808bb000:
        return f"UITextList_{address}"
    elif 0x1808bb000 <= addr_num <= 0x1808bf000:
        return f"UITextBullet_{address}"
    elif 0x1808bf000 <= addr_num <= 0x1808c3000:
        return f"UITextNumbering_{address}"
    elif 0x1808c3000 <= addr_num <= 0x1808c7000:
        return f"UITextIndent_{address}"
    elif 0x1808c7000 <= addr_num <= 0x1808cb000:
        return f"UITextTab_{address}"
    elif 0x1808cb000 <= addr_num <= 0x1808cf000:
        return f"UITextTable_{address}"
    elif 0x1808cf000 <= addr_num <= 0x1808d3000:
        return f"UITextColumn_{address}"
    elif 0x1808d3000 <= addr_num <= 0x1808d7000:
        return f"UITextRow_{address}"
    elif 0x1808d7000 <= addr_num <= 0x1808db000:
        return f"UITextCell_{address}"
    elif 0x1808db000 <= addr_num <= 0x1808df000:
        return f"UITextSpan_{address}"
    elif 0x1808df000 <= addr_num <= 0x1808e3000:
        return f"UITextRun_{address}"
    elif 0x1808e3000 <= addr_num <= 0x1808e7000:
        return f"UITextGlyph_{address}"
    elif 0x1808e7000 <= addr_num <= 0x1808eb000:
        return f"UITextFont_{address}"
    elif 0x1808eb000 <= addr_num <= 0x1808ef000:
        return f"UITextSize_{address}"
    elif 0x1808ef000 <= addr_num <= 0x1808f3000:
        return f"UITextWeight_{address}"
    elif 0x1808f3000 <= addr_num <= 0x1808f7000:
        return f"UITextStyle_{address}"
    elif 0x1808f7000 <= addr_num <= 0x1808fb000:
        return f"UITextColor_{address}"
    elif 0x1808fb000 <= addr_num <= 0x1808ff000:
        return f"UITextBackground_{address}"
    elif 0x1808ff000 <= addr_num <= 0x180903000:
        return f"UITextOutline_{address}"
    elif 0x180903000 <= addr_num <= 0x180907000:
        return f"UITextShadow_{address}"
    elif 0x180907000 <= addr_num <= 0x18090b000:
        return f"UITextGlow_{address}"
    elif 0x18090b000 <= addr_num <= 0x18090f000:
        return f"UITextGradient_{address}"
    elif 0x18090f000 <= addr_num <= 0x180913000:
        return f"UITextTexture_{address}"
    elif 0x180913000 <= addr_num <= 0x180917000:
        return f"UITextShader_{address}"
    elif 0x180917000 <= addr_num <= 0x18091b000:
        return f"UITextEffect_{address}"
    elif 0x18091b000 <= addr_num <= 0x18091f000:
        return f"UITextAnimation_{address}"
    elif 0x18091f000 <= addr_num <= 0x180923000:
        return f"UITextTransition_{address}"
    elif 0x180923000 <= addr_num <= 0x180927000:
        return f"UITextInteraction_{address}"
    elif 0x180927000 <= addr_num <= 0x18092b000:
        return f"UITextSelection_{address}"
    elif 0x18092b000 <= addr_num <= 0x18092f000:
        return f"UITextEditing_{address}"
    elif 0x18092f000 <= addr_num <= 0x180933000:
        return f"UITextInput_{address}"
    elif 0x180933000 <= addr_num <= 0x180937000:
        return f"UITextIME_{address}"
    elif 0x180937000 <= addr_num <= 0x18093b000:
        return f"UITextAutocomplete_{address}"
    elif 0x18093b000 <= addr_num <= 0x18093f000:
        return f"UITextSpellCheck_{address}"
    elif 0x18093f000 <= addr_num <= 0x180943000:
        return f"UITextGrammar_{address}"
    elif 0x180943000 <= addr_num <= 0x180947000:
        return f"UITextAccessibility_{address}"
    elif 0x180947000 <= addr_num <= 0x18094b000:
        return f"UITextLocalization_{address}"
    elif 0x18094b000 <= addr_num <= 0x18094f000:
        return f"UITextRTL_{address}"
    elif 0x18094f000 <= addr_num <= 0x180953000:
        return f"UITextBiDi_{address}"
    elif 0x180953000 <= addr_num <= 0x180957000:
        return f"UITextScript_{address}"
    elif 0x180957000 <= addr_num <= 0x18095b000:
        return f"UITextLanguage_{address}"
    elif 0x18095b000 <= addr_num <= 0x18095f000:
        return f"UITextLocale_{address}"
    elif 0x18095f000 <= addr_num <= 0x180963000:
        return f"UITextFormat_{address}"
    elif 0x180963000 <= addr_num <= 0x180967000:
        return f"UITextParse_{address}"
    elif 0x180967000 <= addr_num <= 0x18096b000:
        return f"UITextRender_{address}"
    elif 0x18096b000 <= addr_num <= 0x18096f000:
        return f"UITextLayout_{address}"
    elif 0x18096f000 <= addr_num <= 0x180973000:
        return f"UITextMeasure_{address}"
    elif 0x180973000 <= addr_num <= 0x180977000:
        return f"UITextMetrics_{address}"
    elif 0x180977000 <= addr_num <= 0x18097b000:
        return f"UITextBounds_{address}"
    elif 0x18097b000 <= addr_num <= 0x18097f000:
        return f"UITextFrame_{address}"
    elif 0x18097f000 <= addr_num <= 0x180983000:
        return f"UITextContainer_{address}"
    elif 0x180983000 <= addr_num <= 0x180987000:
        return f"UITextFlow_{address}"
    elif 0x180987000 <= addr_num <= 0x18098b000:
        return f"UITextHyphenation_{address}"
    elif 0x18098b000 <= addr_num <= 0x18098f000:
        return f"UITextJustification_{address}"
    elif 0x18098f000 <= addr_num <= 0x180993000:
        return f"UITextBalancing_{address}"
    elif 0x180993000 <= addr_num <= 0x180997000:
        return f"UITextKashida_{address}"
    elif 0x180997000 <= addr_num <= 0x18099b000:
        return f"UITextDiacritics_{address}"
    elif 0x18099b000 <= addr_num <= 0x18099f000:
        return f"UITextVowelMarks_{address}"
    elif 0x18099f000 <= addr_num <= 0x1809a3000:
        return f"UITextLigatures_{address}"
    elif 0x1809a3000 <= addr_num <= 0x1809a7000:
        return f"UITextSwashes_{address}"
    elif 0x1809a7000 <= addr_num <= 0x1809ab000:
        return f"UITextAlternates_{address}"
    elif 0x1809ab000 <= addr_num <= 0x1809af000:
        return f"UITextStylistic_{address}"
    elif 0x1809af000 <= addr_num <= 0x1809b3000:
        return f"UITextContextual_{address}"
    elif 0x1809b3000 <= addr_num <= 0x1809b7000:
        return f"UITextHistorical_{address}"
    elif 0x1809b7000 <= addr_num <= 0x1809bb000:
        return f"UITextNumeral_{address}"
    elif 0x1809bb000 <= addr_num <= 0x1809bf000:
        return f"UITextFraction_{address}"
    elif 0x1809bf000 <= addr_num <= 0x1809c3000:
        return f"UITextOrdinal_{address}"
    elif 0x1809c3000 <= addr_num <= 0x1809c7000:
        return f"UITextScientific_{address}"
    elif 0x1809c7000 <= addr_num <= 0x1809cb000:
        return f"UITextMathematical_{address}"
    elif 0x1809cb000 <= addr_num <= 0x1809cf000:
        return f"UITextCurrency_{address}"
    elif 0x1809cf000 <= addr_num <= 0x1809d3000:
        return f"UITextPercentage_{address}"
    elif 0x1809d3000 <= addr_num <= 0x1809d7000:
        return f"UITextDateTime_{address}"
    elif 0x1809d7000 <= addr_num <= 0x1809db000:
        return f"UITextPhoneNumber_{address}"
    elif 0x1809db000 <= addr_num <= 0x1809df000:
        return f"UITextEmailAddress_{address}"
    elif 0x1809df000 <= addr_num <= 0x1809e3000:
        return f"UITextURL_{address}"
    elif 0x1809e3000 <= addr_num <= 0x1809e7000:
        return f"UITextPassword_{address}"
    elif 0x1809e7000 <= addr_num <= 0x1809eb000:
        return f"UITextSecure_{address}"
    elif 0x1809eb000 <= addr_num <= 0x1809ef000:
        return f"UITextMasked_{address}"
    elif 0x1809ef000 <= addr_num <= 0x1809f3000:
        return f"UITextHidden_{address}"
    elif 0x1809f3000 <= addr_num <= 0x1809f7000:
        return f"UITextPlaceholder_{address}"
    elif 0x1809f7000 <= addr_num <= 0x1809fb000:
        return f"UITextHint_{address}"
    elif 0x1809fb000 <= addr_num <= 0x1809ff000:
        return f"UITextLabel_{address}"
    elif 0x1809ff000 <= addr_num <= 0x180a03000:
        return f"UITextCaption_{address}"
    elif 0x180a03000 <= addr_num <= 0x180a07000:
        return f"UITextSubhead_{address}"
    elif 0x180a07000 <= addr_num <= 0x180a0b000:
        return f"UITextHeadline_{address}"
    elif 0x180a0b000 <= addr_num <= 0x180a0f000:
        return f"UITextTitle_{address}"
    elif 0x180a0f000 <= addr_num <= 0x180a13000:
        return f"UITextDisplay_{address}"
    elif 0x180a13000 <= addr_num <= 0x180a17000:
        return f"UITextOverline_{address}"
    elif 0x180a17000 <= addr_num <= 0x180a1b000:
        return f"UITextStrikethrough_{address}"
    elif 0x180a1b000 <= addr_num <= 0x180a1f000:
        return f"UITextUnderline_{address}"
    elif 0x180a1f000 <= addr_num <= 0x180a23000:
        return f"UITextLink_{address}"
    elif 0x180a23000 <= addr_num <= 0x180a27000:
        return f"UITextHyperlink_{address}"
    elif 0x180a27000 <= addr_num <= 0x180a2b000:
        return f"UITextAnchor_{address}"
    elif 0x180a2b000 <= addr_num <= 0x180a2f000:
        return f"UITextBookmark_{address}"
    elif 0x180a2f000 <= addr_num <= 0x180a33000:
        return f"UITextReference_{address}"
    elif 0x180a33000 <= addr_num <= 0x180a37000:
        return f"UITextCitation_{address}"
    elif 0x180a37000 <= addr_num <= 0x180a3b000:
        return f"UITextQuote_{address}"
    elif 0x180a3b000 <= addr_num <= 0x180a3f000:
        return f"UITextCode_{address}"
    elif 0x180a3f000 <= addr_num <= 0x180a43000:
        return f"UITextPre_{address}"
    elif 0x180a43000 <= addr_num <= 0x180a47000:
        return f"UITextBlock_{address}"
    elif 0x180a47000 <= addr_num <= 0x180a4b000:
        return f"UITextSection_{address}"
    elif 0x180a4b000 <= addr_num <= 0x180a4f000:
        return f"UITextChapter_{address}"
    elif 0x180a4f000 <= addr_num <= 0x180a53000:
        return f"UITextBook_{address}"
    elif 0x180a53000 <= addr_num <= 0x180a57000:
        return f"UITextVolume_{address}"
    elif 0x180a57000 <= addr_num <= 0x180a5b000:
        return f"UITextSeries_{address}"
    elif 0x180a5b000 <= addr_num <= 0x180a5f000:
        return f"UITextCollection_{address}"
    elif 0x180a5f000 <= addr_num <= 0x180a63000:
        return f"UITextLibrary_{address}"
    elif 0x180a63000 <= addr_num <= 0x180a67000:
        return f"UITextArchive_{address}"
    elif 0x180a67000 <= addr_num <= 0x180a6b000:
        return f"UITextDatabase_{address}"
    elif 0x180a6b000 <= addr_num <= 0x180a6f000:
        return f"UITextIndex_{address}"
    elif 0x180a6f000 <= addr_num <= 0x180a73000:
        return f"UITextSearch_{address}"
    elif 0x180a73000 <= addr_num <= 0x180a77000:
        return f"UITextFind_{address}"
    elif 0x180a77000 <= addr_num <= 0x180a7b000:
        return f"UITextReplace_{address}"
    elif 0x180a7b000 <= addr_num <= 0x180a7f000:
        return f"UITextSubstitute_{address}"
    elif 0x180a7f000 <= addr_num <= 0x180a83000:
        return f"UITextTransform_{address}"
    elif 0x180a83000 <= addr_num <= 0x180a87000:
        return f"UITextConvert_{address}"
    elif 0x180a87000 <= addr_num <= 0x180a8b000:
        return f"UITextTranslate_{address}"
    elif 0x180a8b000 <= addr_num <= 0x180a8f000:
        return f"UITextLocalize_{address}"
    elif 0x180a8f000 <= addr_num <= 0x180a93000:
        return f"UITextInternationalize_{address}"
    elif 0x180a93000 <= addr_num <= 0x180a97000:
        return f"UITextGlobalize_{address}"
    elif 0x180a97000 <= addr_num <= 0x180a9b000:
        return f"UITextUnicode_{address}"
    elif 0x180a9b000 <= addr_num <= 0x180a9f000:
        return f"UITextUTF8_{address}"
    elif 0x180a9f000 <= addr_num <= 0x180aa3000:
        return f"UITextUTF16_{address}"
    elif 0x180aa3000 <= addr_num <= 0x180aa7000:
        return f"UITextUTF32_{address}"
    elif 0x180aa7000 <= addr_num <= 0x180aab000:
        return f"UITextEncoding_{address}"
    elif 0x180aab000 <= addr_num <= 0x180aaf000:
        return f"UITextCharset_{address}"
    elif 0x180aaf000 <= addr_num <= 0x180ab3000:
        return f"UITextCodePage_{address}"
    elif 0x180ab3000 <= addr_num <= 0x180ab7000:
        return f"UITextMIME_{address}"
    elif 0x180ab7000 <= addr_num <= 0x180abb000:
        return f"UITextBOM_{address}"
    elif 0x180abb000 <= addr_num <= 0x180abf000:
        return f"UITextSignature_{address}"
    elif 0x180abf000 <= addr_num <= 0x180ac3000:
        return f"UITextChecksum_{address}"
    elif 0x180ac3000 <= addr_num <= 0x180ac7000:
        return f"UITextHash_{address}"
    elif 0x180ac7000 <= addr_num <= 0x180acb000:
        return f"UITextDigest_{address}"
    elif 0x180acb000 <= addr_num <= 0x180acf000:
        return f"UITextEncryption_{address}"
    elif 0x180acf000 <= addr_num <= 0x180ad3000:
        return f"UITextDecryption_{address}"
    elif 0x180ad3000 <= addr_num <= 0x180ad7000:
        return f"UITextCompression_{address}"
    elif 0x180ad7000 <= addr_num <= 0x180adb000:
        return f"UITextDecompression_{address}"
    elif 0x180adb000 <= addr_num <= 0x180adf000:
        return f"UITextArchive_{address}"
    elif 0x180adf000 <= addr_num <= 0x180ae3000:
        return f"UITextBackup_{address}"
    elif 0x180ae3000 <= addr_num <= 0x180ae7000:
        return f"UITextRestore_{address}"
    elif 0x180ae7000 <= addr_num <= 0x180aeb000:
        return f"UITextSync_{address}"
    elif 0x180aeb000 <= addr_num <= 0x180aef000:
        return f"UITextVersion_{address}"
    elif 0x180aef000 <= addr_num <= 0x180af3000:
        return f"UITextRevision_{address}"
    elif 0x180af3000 <= addr_num <= 0x180af7000:
        return f"UITextHistory_{address}"
    elif 0x180af7000 <= addr_num <= 0x180afb000:
        return f"UITextLog_{address}"
    elif 0x180afb000 <= addr_num <= 0x180aff000:
        return f"UITextAudit_{address}"
    elif 0x180aff000 <= addr_num <= 0x180b03000:
        return f"UITextTrack_{address}"
    elif 0x180b03000 <= addr_num <= 0x180b07000:
        return f"UITextMonitor_{address}"
    elif 0x180b07000 <= addr_num <= 0x180b0b000:
        return f"UITextProfile_{address}"
    elif 0x180b0b000 <= addr_num <= 0x180b0f000:
        return f"UITextBenchmark_{address}"
    elif 0x180b0f000 <= addr_num <= 0x180b13000:
        return f"UITextOptimize_{address}"
    elif 0x180b13000 <= addr_num <= 0x180b17000:
        return f"UITextTune_{address}"
    elif 0x180b17000 <= addr_num <= 0x180b1b000:
        return f"UITextCalibrate_{address}"
    elif 0x180b1b000 <= addr_num <= 0x180b1f000:
        return f"UITextAdjust_{address}"
    elif 0x180b1f000 <= addr_num <= 0x180b23000:
        return f"UITextFineTune_{address}"
    elif 0x180b23000 <= addr_num <= 0x180b27000:
        return f"UITextPolish_{address}"
    elif 0x180b27000 <= addr_num <= 0x180b2b000:
        return f"UITextRefine_{address}"
    elif 0x180b2b000 <= addr_num <= 0x180b2f000:
        return f"UITextImprove_{address}"
    elif 0x180b2f000 <= addr_num <= 0x180b33000:
        return f"UITextEnhance_{address}"
    elif 0x180b33000 <= addr_num <= 0x180b37000:
        return f"UITextUpgrade_{address}"
    elif 0x180b37000 <= addr_num <= 0x180b3b000:
        return f"UITextUpdate_{address}"
    elif 0x180b3b000 <= addr_num <= 0x180b3f000:
        return f"UITextRefresh_{address}"
    elif 0x180b3f000 <= addr_num <= 0x180b43000:
        return f"UITextReload_{address}"
    elif 0x180b43000 <= addr_num <= 0x180b47000:
        return f"UITextRestart_{address}"
    elif 0x180b47000 <= addr_num <= 0x180b4b000:
        return f"UITextReboot_{address}"
    elif 0x180b4b000 <= addr_num <= 0x180b4f000:
        return f"UITextReset_{address}"
    elif 0x180b4f000 <= addr_num <= 0x180b53000:
        return f"UITextClear_{address}"
    elif 0x180b53000 <= addr_num <= 0x180b57000:
        return f"UITextFlush_{address}"
    elif 0x180b57000 <= addr_num <= 0x180b5b000:
        return f"UITextPurge_{address}"
    elif 0x180b5b000 <= addr_num <= 0x180b5f000:
        return f"UITextClean_{address}"
    elif 0x180b5f000 <= addr_num <= 0x180b63000:
        return f"UITextSanitize_{address}"
    elif 0x180b63000 <= addr_num <= 0x180b67000:
        return f"UITextDisinfect_{address}"
    elif 0x180b67000 <= addr_num <= 0x180b6b000:
        return f"UITextSterilize_{address}"
    elif 0x180b6b000 <= addr_num <= 0x180b6f000:
        return f"UITextQuarantine_{address}"
    elif 0x180b6f000 <= addr_num <= 0x180b73000:
        return f"UITextIsolate_{address}"
    elif 0x180b73000 <= addr_num <= 0x180b77000:
        return f"UITextSeparate_{address}"
    elif 0x180b77000 <= addr_num <= 0x180b7b000:
        return f"UITextDivide_{address}"
    elif 0x180b7b000 <= addr_num <= 0x180b7f000:
        return f"UITextPartition_{address}"
    elif 0x180b7f000 <= addr_num <= 0x180b83000:
        return f"UITextSegment_{address}"
    elif 0x180b83000 <= addr_num <= 0x180b87000:
        return f"UITextFragment_{address}"
    elif 0x180b87000 <= addr_num <= 0x180b8b000:
        return f"UITextChunk_{address}"
    elif 0x180b8b000 <= addr_num <= 0x180b8f000:
        return f"UITextBlock_{address}"
    elif 0x180b8f000 <= addr_num <= 0x180b93000:
        return f"UITextGroup_{address}"
    elif 0x180b93000 <= addr_num <= 0x180b97000:
        return f"UITextCluster_{address}"
    elif 0x180b97000 <= addr_num <= 0x180b9b000:
        return f"UITextBatch_{address}"
    elif 0x180b9b000 <= addr_num <= 0x180b9f000:
        return f"UITextBundle_{address}"
    elif 0x180b9f000 <= addr_num <= 0x180ba3000:
        return f"UITextPackage_{address}"
    elif 0x180ba3000 <= addr_num <= 0x180ba7000:
        return f"UITextContainer_{address}"
    elif 0x180ba7000 <= addr_num <= 0x180bab000:
        return f"UITextWrapper_{address}"
    elif 0x180bab000 <= addr_num <= 0x180baf000:
        return f"UITextAdapter_{address}"
    elif 0x180baf000 <= addr_num <= 0x180bb3000:
        return f"UITextBridge_{address}"
    elif 0x180bb3000 <= addr_num <= 0x180bb7000:
        return f"UITextGateway_{address}"
    elif 0x180bb7000 <= addr_num <= 0x180bbb000:
        return f"UITextProxy_{address}"
    elif 0x180bbb000 <= addr_num <= 0x180bbf000:
        return f"UITextFacade_{address}"
    elif 0x180bbf000 <= addr_num <= 0x180bc3000:
        return f"UITextDecorator_{address}"
    elif 0x180bc3000 <= addr_num <= 0x180bc7000:
        return f"UITextObserver_{address}"
    elif 0x180bc7000 <= addr_num <= 0x180bcb000:
        return f"UITextListener_{address}"
    elif 0x180bcb000 <= addr_num <= 0x180bcf000:
        return f"UITextSubscriber_{address}"
    elif 0x180bcf000 <= addr_num <= 0x180bd3000:
        return f"UITextPublisher_{address}"
    elif 0x180bd3000 <= addr_num <= 0x180bd7000:
        return f"UITextNotifier_{address}"
    elif 0x180bd7000 <= addr_num <= 0x180bdb000:
        return f"UITextBroadcaster_{address}"
    elif 0x180bdb000 <= addr_num <= 0x180bdf000:
        return f"UITextEmitter_{address}"
    elif 0x180bdf000 <= addr_num <= 0x180be3000:
        return f"UITextTransmitter_{address}"
    elif 0x180be3000 <= addr_num <= 0x180be7000:
        return f"UITextReceiver_{address}"
    elif 0x180be7000 <= addr_num <= 0x180beb000:
        return f"UITextCollector_{address}"
    elif 0x180beb000 <= addr_num <= 0x180bef000:
        return f"UITextAggregator_{address}"
    elif 0x180bef000 <= addr_num <= 0x180bf3000:
        return f"UITextAccumulator_{address}"
    elif 0x180bf3000 <= addr_num <= 0x180bf7000:
        return f"UITextCounter_{address}"
    elif 0x180bf7000 <= addr_num <= 0x180bfb000:
        return f"UITextTimer_{address}"
    elif 0x180bfb000 <= addr_num <= 0x180bff000:
        return f"UITextClock_{address}"
    elif 0x180bff000 <= addr_num <= 0x180c03000:
        return f"UITextCalendar_{address}"
    elif 0x180c03000 <= addr_num <= 0x180c07000:
        return f"UITextSchedule_{address}"
    elif 0x180c07000 <= addr_num <= 0x180c0b000:
        return f"UITextPlanner_{address}"
    elif 0x180c0b000 <= addr_num <= 0x180c0f000:
        return f"UITextOrganizer_{address}"
    elif 0x180c0f000 <= addr_num <= 0x180c13000:
        return f"UITextManager_{address}"
    elif 0x180c13000 <= addr_num <= 0x180c17000:
        return f"UITextSupervisor_{address}"
    elif 0x180c17000 <= addr_num <= 0x180c1b000:
        return f"UITextController_{address}"
    elif 0x180c1b000 <= addr_num <= 0x180c1f000:
        return f"UITextDirector_{address}"
    elif 0x180c1f000 <= addr_num <= 0x180c23000:
        return f"UITextAdministrator_{address}"
    elif 0x180c23000 <= addr_num <= 0x180c27000:
        return f"UITextOperator_{address}"
    elif 0x180c27000 <= addr_num <= 0x180c2b000:
        return f"UITextTechnician_{address}"
    elif 0x180c2b000 <= addr_num <= 0x180c2f000:
        return f"UITextEngineer_{address}"
    elif 0x180c2f000 <= addr_num <= 0x180c33000:
        return f"UITextDeveloper_{address}"
    elif 0x180c33000 <= addr_num <= 0x180c37000:
        return f"UITextProgrammer_{address}"
    elif 0x180c37000 <= addr_num <= 0x180c3b000:
        return f"UITextCoder_{address}"
    elif 0x180c3b000 <= addr_num <= 0x180c3f000:
        return f"UITextHacker_{address}"
    elif 0x180c3f000 <= addr_num <= 0x180c43000:
        return f"UITextCracker_{address}"
    elif 0x180c43000 <= addr_num <= 0x180c47000:
        return f"UITextBreaker_{address}"
    elif 0x180c47000 <= addr_num <= 0x180c4b000:
        return f"UITextAttacker_{address}"
    elif 0x180c4b000 <= addr_num <= 0x180c4f000:
        return f"UITextDefender_{address}"
    elif 0x180c4f000 <= addr_num <= 0x180c53000:
        return f"UITextGuardian_{address}"
    elif 0x180c53000 <= addr_num <= 0x180c57000:
        return f"UITextProtector_{address}"
    elif 0x180c57000 <= addr_num <= 0x180c5b000:
        return f"UITextShield_{address}"
    elif 0x180c5b000 <= addr_num <= 0x180c5f000:
        return f"UITextArmor_{address}"
    elif 0x180c5f000 <= addr_num <= 0x180c63000:
        return f"UITextHelmet_{address}"
    elif 0x180c63000 <= addr_num <= 0x180c67000:
        return f"UITextBreastplate_{address}"
    elif 0x180c67000 <= addr_num <= 0x180c6b000:
        return f"UITextGreaves_{address}"
    elif 0x180c6b000 <= addr_num <= 0x180c6f000:
        return f"UITextBoots_{address}"
    elif 0x180c6f000 <= addr_num <= 0x180c73000:
        return f"UITextGloves_{address}"
    elif 0x180c73000 <= addr_num <= 0x180c77000:
        return f"UITextBelt_{address}"
    elif 0x180c77000 <= addr_num <= 0x180c7b000:
        return f"UITextPouch_{address}"
    elif 0x180c7b000 <= addr_num <= 0x180c7f000:
        return f"UITextBackpack_{address}"
    elif 0x180c7f000 <= addr_num <= 0x180c83000:
        return f"UITextBag_{address}"
    elif 0x180c83000 <= addr_num <= 0x180c87000:
        return f"UITextSatchel_{address}"
    elif 0x180c87000 <= addr_num <= 0x180c8b000:
        return f"UITextSuitcase_{address}"
    elif 0x180c8b000 <= addr_num <= 0x180c8f000:
        return f"UITextTrunk_{address}"
    elif 0x180c8f000 <= addr_num <= 0x180c93000:
        return f"UITextCrate_{address}"
    elif 0x180c93000 <= addr_num <= 0x180c97000:
        return f"UITextBox_{address}"
    elif 0x180c97000 <= addr_num <= 0x180c9b000:
        return f"UITextCase_{address}"
    elif 0x180c9b000 <= addr_num <= 0x180c9f000:
        return f"UITextChest_{address}"
    elif 0x180c9f000 <= addr_num <= 0x180ca3000:
        return f"UITextLocker_{address}"
    elif 0x180ca3000 <= addr_num <= 0x180ca7000:
        return f"UITextSafe_{address}"
    elif 0x180ca7000 <= addr_num <= 0x180cab000:
        return f"UITextVault_{address}"
    elif 0x180cab000 <= addr_num <= 0x180caf000:
        return f"UITextRepository_{address}"
    elif 0x180caf000 <= addr_num <= 0x180cb3000:
        return f"UITextStorage_{address}"
    elif 0x180cb3000 <= addr_num <= 0x180cb7000:
        return f"UITextWarehouse_{address}"
    elif 0x180cb7000 <= addr_num <= 0x180cbb000:
        return f"UITextDepot_{address}"
    elif 0x180cbb000 <= addr_num <= 0x180cbf000:
        return f"UITextHangar_{address}"
    elif 0x180cbf000 <= addr_num <= 0x180cc3000:
        return f"UITextGarage_{address}"
    elif 0x180cc3000 <= addr_num <= 0x180cc7000:
        return f"UITextShed_{address}"
    elif 0x180cc7000 <= addr_num <= 0x180ccb000:
        return f"UITextBarn_{address}"
    elif 0x180ccb000 <= addr_num <= 0x180ccf000:
        return f"UITextStable_{address}"
    elif 0x180ccf000 <= addr_num <= 0x180cd3000:
        return f"UITextKennel_{address}"
    elif 0x180cd3000 <= addr_num <= 0x180cd7000:
        return f"UITextCage_{address}"
    elif 0x180cd7000 <= addr_num <= 0x180cdb000:
        return f"UITextPen_{address}"
    elif 0x180cdb000 <= addr_num <= 0x180cdf000:
        return f"UITextEnclosure_{address}"
    elif 0x180cdf000 <= addr_num <= 0x180ce3000:
        return f"UITextCompound_{address}"
    elif 0x180ce3000 <= addr_num <= 0x180ce7000:
        return f"UITextFacility_{address}"
    elif 0x180ce7000 <= addr_num <= 0x180ceb000:
        return f"UITextBuilding_{address}"
    elif 0x180ceb000 <= addr_num <= 0x180cef000:
        return f"UITextStructure_{address}"
    elif 0x180cef000 <= addr_num <= 0x180cf3000:
        return f"UITextConstruction_{address}"
    elif 0x180cf3000 <= addr_num <= 0x180cf7000:
        return f"UITextArchitecture_{address}"
    elif 0x180cf7000 <= addr_num <= 0x180cfb000:
        return f"UITextDesign_{address}"
    elif 0x180cfb000 <= addr_num <= 0x180cff000:
        return f"UITextBlueprint_{address}"
    elif 0x180cff000 <= addr_num <= 0x180d03000:
        return f"UITextPlan_{address}"
    elif 0x180d03000 <= addr_num <= 0x180d07000:
        return f"UITextDrawing_{address}"
    elif 0x180d07000 <= addr_num <= 0x180d0b000:
        return f"UITextSketch_{address}"
    elif 0x180d0b000 <= addr_num <= 0x180d0f000:
        return f"UITextDiagram_{address}"
    elif 0x180d0f000 <= addr_num <= 0x180d13000:
        return f"UITextChart_{address}"
    elif 0x180d13000 <= addr_num <= 0x180d17000:
        return f"UITextGraph_{address}"
    elif 0x180d17000 <= addr_num <= 0x180d1b000:
        return f"UITextPlot_{address}"
    elif 0x180d1b000 <= addr_num <= 0x180d1f000:
        return f"UITextMap_{address}"
    elif 0x180d1f000 <= addr_num <= 0x180d23000:
        return f"UITextAtlas_{address}"
    elif 0x180d23000 <= addr_num <= 0x180d27000:
        return f"UITextGlobe_{address}"
    elif 0x180d27000 <= addr_num <= 0x180d2b000:
        return f"UITextWorld_{address}"
    elif 0x180d2b000 <= addr_num <= 0x180d2f000:
        return f"UITextUniverse_{address}"
    elif 0x180d2f000 <= addr_num <= 0x180d33000:
        return f"UITextCosmos_{address}"
    elif 0x180d33000 <= addr_num <= 0x180d37000:
        return f"UITextGalaxy_{address}"
    elif 0x180d37000 <= addr_num <= 0x180d3b000:
        return f"UITextSolarSystem_{address}"
    elif 0x180d3b000 <= addr_num <= 0x180d3f000:
        return f"UITextPlanet_{address}"
    elif 0x180d3f000 <= addr_num <= 0x180d43000:
        return f"UITextMoon_{address}"
    elif 0x180d43000 <= addr_num <= 0x180d47000:
        return f"UITextAsteroid_{address}"
    elif 0x180d47000 <= addr_num <= 0x180d4b000:
        return f"UITextComet_{address}"
    elif 0x180d4b000 <= addr_num <= 0x180d4f000:
        return f"UITextMeteor_{address}"
    elif 0x180d4f000 <= addr_num <= 0x180d53000:
        return f"UITextStar_{address}"
    elif 0x180d53000 <= addr_num <= 0x180d57000:
        return f"UITextSun_{address}"
    elif 0x180d57000 <= addr_num <= 0x180d5b000:
        return f"UITextNebula_{address}"
    elif 0x180d5b000 <= addr_num <= 0x180d5f000:
        return f"UITextBlackHole_{address}"
    elif 0x180d5f000 <= addr_num <= 0x180d63000:
        return f"UITextWormhole_{address}"
    elif 0x180d63000 <= addr_num <= 0x180d67000:
        return f"UITextPortal_{address}"
    elif 0x180d67000 <= addr_num <= 0x180d6b000:
        return f"UITextGateway_{address}"
    elif 0x180d6b000 <= addr_num <= 0x180d6f000:
        return f"UITextBridge_{address}"
    elif 0x180d6f000 <= addr_num <= 0x180d73000:
        return f"UITextTunnel_{address}"
    elif 0x180d73000 <= addr_num <= 0x180d77000:
        return f"UITextPassage_{address}"
    elif 0x180d77000 <= addr_num <= 0x180d7b000:
        return f"UITextCorridor_{address}"
    elif 0x180d7b000 <= addr_num <= 0x180d7f000:
        return f"UITextHallway_{address}"
    elif 0x180d7f000 <= addr_num <= 0x180d83000:
        return f"UITextChamber_{address}"
    elif 0x180d83000 <= addr_num <= 0x180d87000:
        return f"UITextRoom_{address}"
    elif 0x180d87000 <= addr_num <= 0x180d8b000:
        return f"UITextChamber_{address}"
    elif 0x180d8b000 <= addr_num <= 0x180d8f000:
        return f"UITextOffice_{address}"
    elif 0x180d8f000 <= addr_num <= 0x180d93000:
        return f"UITextStudy_{address}"
    elif 0x180d93000 <= addr_num <= 0x180d97000:
        return f"UITextLibrary_{address}"
    elif 0x180d97000 <= addr_num <= 0x180d9b000:
        return f"UITextLaboratory_{address}"
    elif 0x180d9b000 <= addr_num <= 0x180d9f000:
        return f"UITextWorkshop_{address}"
    elif 0x180d9f000 <= addr_num <= 0x180da3000:
        return f"UITextFactory_{address}"
    elif 0x180da3000 <= addr_num <= 0x180da7000:
        return f"UITextPlant_{address}"
    elif 0x180da7000 <= addr_num <= 0x180dab000:
        return f"UITextMill_{address}"
    elif 0x180dab000 <= addr_num <= 0x180daf000:
        return f"UITextForge_{address}"
    elif 0x180daf000 <= addr_num <= 0x180db3000:
        return f"UITextSmithy_{address}"
    elif 0x180db3000 <= addr_num <= 0x180db7000:
        return f"UITextFoundry_{address}"
    elif 0x180db7000 <= addr_num <= 0x180dbb000:
        return f"UITextRefinery_{address}"
    elif 0x180dbb000 <= addr_num <= 0x180dbf000:
        return f"UITextProcessing_{address}"
    elif 0x180dbf000 <= addr_num <= 0x180dc3000:
        return f"UITextManufacturing_{address}"
    elif 0x180dc3000 <= addr_num <= 0x180dc7000:
        return f"UITextProduction_{address}"
    elif 0x180dc7000 <= addr_num <= 0x180dcb000:
        return f"UITextAssembly_{address}"
    elif 0x180dcb000 <= addr_num <= 0x180dcf000:
        return f"UITextConstruction_{address}"
    elif 0x180dcf000 <= addr_num <= 0x180dd3000:
        return f"UITextEngineering_{address}"
    elif 0x180dd3000 <= addr_num <= 0x180dd7000:
        return f"UITextArchitecture_{address}"
    elif 0x180dd7000 <= addr_num <= 0x180ddb000:
        return f"UITextDesign_{address}"
    elif 0x180ddb000 <= addr_num <= 0x180ddf000:
        return f"UITextPlanning_{address}"
    elif 0x180ddf000 <= addr_num <= 0x180de3000:
        return f"UITextStrategy_{address}"
    elif 0x180de3000 <= addr_num <= 0x180de7000:
        return f"UITextTactics_{address}"
    elif 0x180de7000 <= addr_num <= 0x180deb000:
        return f"UITextLogistics_{address}"
    elif 0x180deb000 <= addr_num <= 0x180def000:
        return f"UITextOperations_{address}"
    elif 0x180def000 <= addr_num <= 0x180df3000:
        return f"UITextManagement_{address}"
    elif 0x180df3000 <= addr_num <= 0x180df7000:
        return f"UITextAdministration_{address}"
    elif 0x180df7000 <= addr_num <= 0x180dfb000:
        return f"UITextOrganization_{address}"
    elif 0x180dfb000 <= addr_num <= 0x180dff000:
        return f"UITextCoordination_{address}"
    elif 0x180dff000 <= addr_num <= 0x180e03000:
        return f"UITextCommunication_{address}"
    elif 0x180e03000 <= addr_num <= 0x180e07000:
        return f"UITextNetworking_{address}"
    elif 0x180e07000 <= addr_num <= 0x180e0b000:
        return f"UITextProtocol_{address}"
    elif 0x180e0b000 <= addr_num <= 0x180e0f000:
        return f"UITextStandard_{address}"
    elif 0x180e0f000 <= addr_num <= 0x180e13000:
        return f"UITextSpecification_{address}"
    elif 0x180e13000 <= addr_num <= 0x180e17000:
        return f"UITextDocumentation_{address}"
    elif 0x180e17000 <= addr_num <= 0x180e1b000:
        return f"UITextManual_{address}"
    elif 0x180e1b000 <= addr_num <= 0x180e1f000:
        return f"UITextGuide_{address}"
    elif 0x180e1f000 <= addr_num <= 0x180e23000:
        return f"UITextTutorial_{address}"
    elif 0x180e23000 <= addr_num <= 0x180e27000:
        return f"UITextTraining_{address}"
    elif 0x180e27000 <= addr_num <= 0x180e2b000:
        return f"UITextEducation_{address}"
    elif 0x180e2b000 <= addr_num <= 0x180e2f000:
        return f"UITextLearning_{address}"
    elif 0x180e2f000 <= addr_num <= 0x180e33000:
        return f"UITextKnowledge_{address}"
    elif 0x180e33000 <= addr_num <= 0x180e37000:
        return f"UITextWisdom_{address}"
    elif 0x180e37000 <= addr_num <= 0x180e3b000:
        return f"UITextUnderstanding_{address}"
    elif 0x180e3b000 <= addr_num <= 0x180e3f000:
        return f"UITextComprehension_{address}"
    elif 0x180e3f000 <= addr_num <= 0x180e43000:
        return f"UITextInsight_{address}"
    elif 0x180e43000 <= addr_num <= 0x180e47000:
        return f"UITextIntuition_{address}"
    elif 0x180e47000 <= addr_num <= 0x180e4b000:
        return f"UITextPerception_{address}"
    elif 0x180e4b000 <= addr_num <= 0x180e4f000:
        return f"UITextAwareness_{address}"
    elif 0x180e4f000 <= addr_num <= 0x180e53000:
        return f"UITextConsciousness_{address}"
    elif 0x180e53000 <= addr_num <= 0x180e57000:
        return f"UITextMind_{address}"
    elif 0x180e57000 <= addr_num <= 0x180e5b000:
        return f"UITextThought_{address}"
    elif 0x180e5b000 <= addr_num <= 0x180e5f000:
        return f"UITextIdea_{address}"
    elif 0x180e5f000 <= addr_num <= 0x180e63000:
        return f"UITextConcept_{address}"
    elif 0x180e63000 <= addr_num <= 0x180e67000:
        return f"UITextTheory_{address}"
    elif 0x180e67000 <= addr_num <= 0x180e6b000:
        return f"UITextHypothesis_{address}"
    elif 0x180e6b000 <= addr_num <= 0x180e6f000:
        return f"UITextAssumption_{address}"
    elif 0x180e6f000 <= addr_num <= 0x180e73000:
        return f"UITextPremise_{address}"
    elif 0x180e73000 <= addr_num <= 0x180e77000:
        return f"UITextConclusion_{address}"
    elif 0x180e77000 <= addr_num <= 0x180e7b000:
        return f"UITextInference_{address}"
    elif 0x180e7b000 <= addr_num <= 0x180e7f000:
        return f"UITextDeduction_{address}"
    elif 0x180e7f000 <= addr_num <= 0x180e83000:
        return f"UITextInduction_{address}"
    elif 0x180e83000 <= addr_num <= 0x180e87000:
        return f"UITextAbduction_{address}"
    elif 0x180e87000 <= addr_num <= 0x180e8b000:
        return f"UITextReasoning_{address}"
    elif 0x180e8b000 <= addr_num <= 0x180e8f000:
        return f"UITextLogic_{address}"
    elif 0x180e8f000 <= addr_num <= 0x180e93000:
        return f"UITextRationality_{address}"
    elif 0x180e93000 <= addr_num <= 0x180e97000:
        return f"UITextIntelligence_{address}"
    elif 0x180e97000 <= addr_num <= 0x180e9b000:
        return f"UITextSapience_{address}"
    elif 0x180e9b000 <= addr_num <= 0x180e9f000:
        return f"UITextSentience_{address}"
    elif 0x180e9f000 <= addr_num <= 0x180ea3000:
        return f"UITextCognition_{address}"
    elif 0x180ea3000 <= addr_num <= 0x180ea7000:
        return f"UITextPerception_{address}"
    elif 0x180ea7000 <= addr_num <= 0x180eab000:
        return f"UITextSensation_{address}"
    elif 0x180eab000 <= addr_num <= 0x180eaf000:
        return f"UITextFeeling_{address}"
    elif 0x180eaf000 <= addr_num <= 0x180eb3000:
        return f"UITextEmotion_{address}"
    elif 0x180eb3000 <= addr_num <= 0x180eb7000:
        return f"UITextMood_{address}"
    elif 0x180eb7000 <= addr_num <= 0x180ebb000:
        return f"UITextAttitude_{address}"
    elif 0x180ebb000 <= addr_num <= 0x180ebf000:
        return f"UITextPersonality_{address}"
    elif 0x180ebf000 <= addr_num <= 0x180ec3000:
        return f"UITextCharacter_{address}"
    elif 0x180ec3000 <= addr_num <= 0x180ec7000:
        return f"UITextIdentity_{address}"
    elif 0x180ec7000 <= addr_num <= 0x180ecb000:
        return f"UITextSelf_{address}"
    elif 0x180ecb000 <= addr_num <= 0x180ecf000:
        return f"UITextEgo_{address}"
    elif 0x180ecf000 <= addr_num <= 0x180ed3000:
        return f"UITextSoul_{address}"
    elif 0x180ed3000 <= addr_num <= 0x180ed7000:
        return f"UITextSpirit_{address}"
    elif 0x180ed7000 <= addr_num <= 0x180edb000:
        return f"UITextEssence_{address}"
    elif 0x180edb000 <= addr_num <= 0x180edf000:
        return f"UITextCore_{address}"
    elif 0x180edf000 <= addr_num <= 0x180ee3000:
        return f"UITextHeart_{address}"
    elif 0x180ee3000 <= addr_num <= 0x180ee7000:
        return f"UITextCenter_{address}"
    elif 0x180ee7000 <= addr_num <= 0x180eeb000:
        return f"UITextNucleus_{address}"
    elif 0x180eeb000 <= addr_num <= 0x180eef000:
        return f"UITextKernel_{address}"
    elif 0x180eef000 <= addr_num <= 0x180ef3000:
        return f"UITextSeed_{address}"
    elif 0x180ef3000 <= addr_num <= 0x180ef7000:
        return f"UITextOrigin_{address}"
    elif 0x180ef7000 <= addr_num <= 0x180efb000:
        return f"UITextSource_{address}"
    elif 0x180efb000 <= addr_num <= 0x180eff000:
        return f"UITextBeginning_{address}"
    elif 0x180eff000 <= addr_num <= 0x180f03000:
        return f"UITextStart_{address}"
    elif 0x180f03000 <= addr_num <= 0x180f07000:
        return f"UITextInit_{address}"
    elif 0x180f07000 <= addr_num <= 0x180f0b000:
        return f"UITextCreate_{address}"
    elif 0x180f0b000 <= addr_num <= 0x180f0f000:
        return f"UITextMake_{address}"
    elif 0x180f0f000 <= addr_num <= 0x180f13000:
        return f"UITextBuild_{address}"
    elif 0x180f13000 <= addr_num <= 0x180f17000:
        return f"UITextConstruct_{address}"
    elif 0x180f17000 <= addr_num <= 0x180f1b000:
        return f"UITextAssemble_{address}"
    elif 0x180f1b000 <= addr_num <= 0x180f1f000:
        return f"UITextFabricate_{address}"
    elif 0x180f1f000 <= addr_num <= 0x180f23000:
        return f"UITextManufacture_{address}"
    elif 0x180f23000 <= addr_num <= 0x180f27000:
        return f"UITextProduce_{address}"
    elif 0x180f27000 <= addr_num <= 0x180f2b000:
        return f"UITextGenerate_{address}"
    elif 0x180f2b000 <= addr_num <= 0x180f2f000:
        return f"UITextSpawn_{address}"
    elif 0x180f2f000 <= addr_num <= 0x180f33000:
        return f"UITextEmerge_{address}"
    elif 0x180f33000 <= addr_num <= 0x180f37000:
        return f"UITextAppear_{address}"
    elif 0x180f37000 <= addr_num <= 0x180f3b000:
        return f"UITextManifest_{address}"
    elif 0x180f3b000 <= addr_num <= 0x180f3f000:
        return f"UITextMaterialize_{address}"
    elif 0x180f3f000 <= addr_num <= 0x180f43000:
        return f"UITextForm_{address}"
    elif 0x180f43000 <= addr_num <= 0x180f47000:
        return f"UITextShape_{address}"
    elif 0x180f47000 <= addr_num <= 0x180f4b000:
        return f"UITextMold_{address}"
    elif 0x180f4b000 <= addr_num <= 0x180f4f000:
        return f"UITextCarve_{address}"
    elif 0x180f4f000 <= addr_num <= 0x180f53000:
        return f"UITextCut_{address}"
    elif 0x180f53000 <= addr_num <= 0x180f57000:
        return f"UITextSlice_{address}"
    elif 0x180f57000 <= addr_num <= 0x180f5b000:
        return f"UITextDice_{address}"
    elif 0x180f5b000 <= addr_num <= 0x180f5f000:
        return f"UITextChop_{address}"
    elif 0x180f5f000 <= addr_num <= 0x180f63000:
        return f"UITextHack_{address}"
    elif 0x180f63000 <= addr_num <= 0x180f67000:
        return f"UITextSlash_{address}"
    elif 0x180f67000 <= addr_num <= 0x180f6b000:
        return f"UITextStab_{address}"
    elif 0x180f6b000 <= addr_num <= 0x180f6f000:
        return f"UITextPierce_{address}"
    elif 0x180f6f000 <= addr_num <= 0x180f73000:
        return f"UITextPuncture_{address}"
    elif 0x180f73000 <= addr_num <= 0x180f77000:
        return f"UITextPerforate_{address}"
    elif 0x180f77000 <= addr_num <= 0x180f7b000:
        return f"UITextDrill_{address}"
    elif 0x180f7b000 <= addr_num <= 0x180f7f000:
        return f"UITextBore_{address}"
    elif 0x180f7f000 <= addr_num <= 0x180f83000:
        return f"UITextDig_{address}"
    elif 0x180f83000 <= addr_num <= 0x180f87000:
        return f"UITextExcavate_{address}"
    elif 0x180f87000 <= addr_num <= 0x180f8b000:
        return f"UITextMine_{address}"
    elif 0x180f8b000 <= addr_num <= 0x180f8f000:
        return f"UITextQuarry_{address}"
    elif 0x180f8f000 <= addr_num <= 0x180f93000:
        return f"UITextExtract_{address}"
    elif 0x180f93000 <= addr_num <= 0x180f97000:
        return f"UITextRemove_{address}"
    elif 0x180f97000 <= addr_num <= 0x180f9b000:
        return f"UITextTake_{address}"
    elif 0x180f9b000 <= addr_num <= 0x180f9f000:
        return f"UITextGet_{address}"
    elif 0x180f9f000 <= addr_num <= 0x180fa3000:
        return f"UITextObtain_{address}"
    elif 0x180fa3000 <= addr_num <= 0x180fa7000:
        return f"UITextAcquire_{address}"
    elif 0x180fa7000 <= addr_num <= 0x180fab000:
        return f"UITextGain_{address}"
    elif 0x180fab000 <= addr_num <= 0x180faf000:
        return f"UITextReceive_{address}"
    elif 0x180faf000 <= addr_num <= 0x180fb3000:
        return f"UITextAccept_{address}"
    elif 0x180fb3000 <= addr_num <= 0x180fb7000:
        return f"UITextWelcome_{address}"
    elif 0x180fb7000 <= addr_num <= 0x180fbb000:
        return f"UITextGreet_{address}"
    elif 0x180fbb000 <= addr_num <= 0x180fbf000:
        return f"UITextMeet_{address}"
    elif 0x180fbf000 <= addr_num <= 0x180fc3000:
        return f"UITextEncounter_{address}"
    elif 0x180fc3000 <= addr_num <= 0x180fc7000:
        return f"UITextDiscover_{address}"
    elif 0x180fc7000 <= addr_num <= 0x180fcb000:
        return f"UITextFind_{address}"
    elif 0x180fcb000 <= addr_num <= 0x180fcf000:
        return f"UITextLocate_{address}"
    elif 0x180fcf000 <= addr_num <= 0x180fd3000:
        return f"UITextSearch_{address}"
    elif 0x180fd3000 <= addr_num <= 0x180fd7000:
        return f"UITextSeek_{address}"
    elif 0x180fd7000 <= addr_num <= 0x180fdb000:
        return f"UITextLook_{address}"
    elif 0x180fdb000 <= addr_num <= 0x180fdf000:
        return f"UITextWatch_{address}"
    elif 0x180fdf000 <= addr_num <= 0x180fe3000:
        return f"UITextObserve_{address}"
    elif 0x180fe3000 <= addr_num <= 0x180fe7000:
        return f"UITextSee_{address}"
    elif 0x180fe7000 <= addr_num <= 0x180feb000:
        return f"UITextView_{address}"
    elif 0x180feb000 <= addr_num <= 0x180fef000:
        return f"UITextWatch_{address}"
    elif 0x180fef000 <= addr_num <= 0x180ff3000:
        return f"UITextMonitor_{address}"
    elif 0x180ff3000 <= addr_num <= 0x180ff7000:
        return f"UITextTrack_{address}"
    elif 0x180ff7000 <= addr_num <= 0x180ffb000:
        return f"UITextFollow_{address}"
    elif 0x180ffb000 <= addr_num <= 0x180fff000:
        return f"UITextPursue_{address}"
    elif 0x180fff000 <= addr_num <= 0x181003000:
        return f"UITextChase_{address}"
    elif 0x181003000 <= addr_num <= 0x181007000:
        return f"UITextHunt_{address}"
    elif 0x181007000 <= addr_num <= 0x18100b000:
        return f"UITextCapture_{address}"
    elif 0x18100b000 <= addr_num <= 0x18100f000:
        return f"UITextCatch_{address}"
    elif 0x18100f000 <= addr_num <= 0x181013000:
        return f"UITextGrab_{address}"
    elif 0x181013000 <= addr_num <= 0x181017000:
        return f"UITextSeize_{address}"
    elif 0x181017000 <= addr_num <= 0x18101b000:
        return f"UITextTake_{address}"
    elif 0x18101b000 <= addr_num <= 0x18101f000:
        return f"UITextSteal_{address}"
    elif 0x18101f000 <= addr_num <= 0x181023000:
        return f"UITextRob_{address}"
    elif 0x181023000 <= addr_num <= 0x181027000:
        return f"UITextLoot_{address}"
    elif 0x181027000 <= addr_num <= 0x18102b000:
        return f"UITextPillage_{address}"
    elif 0x18102b000 <= addr_num <= 0x18102f000:
        return f"UITextPlunder_{address}"
    elif 0x18102f000 <= addr_num <= 0x181033000:
        return f"UITextRaid_{address}"
    elif 0x181033000 <= addr_num <= 0x181037000:
        return f"UITextInvade_{address}"
    elif 0x181037000 <= addr_num <= 0x18103b000:
        return f"UITextAttack_{address}"
    elif 0x18103b000 <= addr_num <= 0x18103f000:
        return f"UITextAssault_{address}"
    elif 0x18103f000 <= addr_num <= 0x181043000:
        return f"UITextStrike_{address}"
    elif 0x181043000 <= addr_num <= 0x181047000:
        return f"UITextHit_{address}"
    elif 0x181047000 <= addr_num <= 0x18104b000:
        return f"UITextPunch_{address}"
    elif 0x18104b000 <= addr_num <= 0x18104f000:
        return f"UITextKick_{address}"
    elif 0x18104f000 <= addr_num <= 0x181053000:
        return f"UITextSlap_{address}"
    elif 0x181053000 <= addr_num <= 0x181057000:
        return f"UITextSmack_{address}"
    elif 0x181057000 <= addr_num <= 0x18105b000:
        return f"UITextWhack_{address}"
    elif 0x18105b000 <= addr_num <= 0x18105f000:
        return f"UITextBash_{address}"
    elif 0x18105f000 <= addr_num <= 0x181063000:
        return f"UITextCrush_{address}"
    elif 0x181063000 <= addr_num <= 0x181067000:
        return f"UITextSmash_{address}"
    elif 0x181067000 <= addr_num <= 0x18106b000:
        return f"UITextBreak_{address}"
    elif 0x18106b000 <= addr_num <= 0x18106f000:
        return f"UITextShatter_{address}"
    elif 0x18106f000 <= addr_num <= 0x181073000:
        return f"UITextDestroy_{address}"
    elif 0x181073000 <= addr_num <= 0x181077000:
        return f"UITextDemolish_{address}"
    elif 0x181077000 <= addr_num <= 0x18107b000:
        return f"UITextRaze_{address}"
    elif 0x18107b000 <= addr_num <= 0x18107f000:
        return f"UITextLevel_{address}"
    elif 0x18107f000 <= addr_num <= 0x181083000:
        return f"UITextFlatten_{address}"
    elif 0x181083000 <= addr_num <= 0x181087000:
        return f"UITextPulverize_{address}"
    elif 0x181087000 <= addr_num <= 0x18108b000:
        return f"UITextVaporize_{address}"
    elif 0x18108b000 <= addr_num <= 0x18108f000:
        return f"UITextAnnihilate_{address}"
    elif 0x18108f000 <= addr_num <= 0x181093000:
        return f"UITextErase_{address}"
    elif 0x181093000 <= addr_num <= 0x181097000:
        return f"UITextDelete_{address}"
    elif 0x181097000 <= addr_num <= 0x18109b000:
        return f"UITextRemove_{address}"
    elif 0x18109b000 <= addr_num <= 0x18109f000:
        return f"UITextEliminate_{address}"
    elif 0x18109f000 <= addr_num <= 0x1810a3000:
        return f"UITextExpunge_{address}"
    elif 0x1810a3000 <= addr_num <= 0x1810a7000:
        return f"UITextObliterate_{address}"
    elif 0x1810a7000 <= addr_num <= 0x1810ab000:
        return f"UITextExterminate_{address}"
    elif 0x1810ab000 <= addr_num <= 0x1810af000:
        return f"UITextEradicate_{address}"
    elif 0x1810af000 <= addr_num <= 0x1810b3000:
        return f"UITextExtinguish_{address}"
    elif 0x1810b3000 <= addr_num <= 0x1810b7000:
        return f"UITextQuench_{address}"
    elif 0x1810b7000 <= addr_num <= 0x1810bb000:
        return f"UITextDouse_{address}"
    elif 0x1810bb000 <= addr_num <= 0x1810bf000:
        return f"UITextDampen_{address}"
    elif 0x1810bf000 <= addr_num <= 0x1810c3000:
        return f"UITextMoisten_{address}"
    elif 0x1810c3000 <= addr_num <= 0x1810c7000:
        return f"UITextWet_{address}"
    elif 0x1810c7000 <= addr_num <= 0x1810cb000:
        return f"UITextSoak_{address}"
    elif 0x1810cb000 <= addr_num <= 0x1810cf000:
        return f"UITextSaturate_{address}"
    elif 0x1810cf000 <= addr_num <= 0x1810d3000:
        return f"UITextImmerse_{address}"
    elif 0x1810d3000 <= addr_num <= 0x1810d7000:
        return f"UITextSubmerge_{address}"
    elif 0x1810d7000 <= addr_num <= 0x1810db000:
        return f"UITextDrown_{address}"
    elif 0x1810db000 <= addr_num <= 0x1810df000:
        return f"UITextFlood_{address}"
    elif 0x1807d7000 <= addr_num <= 0x1807db000:
        return f"UIPageControl_{address}"
    elif 0x1807db000 <= addr_num <= 0x1807df000:
        return f"UICarousel_{address}"
    elif 0x1807df000 <= addr_num <= 0x1807e3000:
        return f"UIGrid_{address}"
    elif 0x1807e3000 <= addr_num <= 0x1807e7000:
        return f"UIStack_{address}"
    elif 0x1807e7000 <= addr_num <= 0x1807eb000:
        return f"UIFlexBox_{address}"
    elif 0x1807eb000 <= addr_num <= 0x1807ef000:
        return f"UIGridLayout_{address}"
    elif 0x1807ef000 <= addr_num <= 0x1807f3000:
        return f"UIFlowLayout_{address}"
    elif 0x1807f3000 <= addr_num <= 0x1807f7000:
        return f"UIAbsoluteLayout_{address}"
    elif 0x1807f7000 <= addr_num <= 0x1807fb000:
        return f"UIRelativeLayout_{address}"
    elif 0x1807fb000 <= addr_num <= 0x1807ff000:
        return f"UIConstraintLayout_{address}"
    elif 0x1807ff000 <= addr_num <= 0x180803000:
        return f"UIDynamicLayout_{address}"
    elif 0x180803000 <= addr_num <= 0x180807000:
        return f"UIAdaptiveLayout_{address}"
    elif 0x180807000 <= addr_num <= 0x18080b000:
        return f"UIResponsiveLayout_{address}"
    elif 0x18080b000 <= addr_num <= 0x18080f000:
        return f"UIMultiScreenLayout_{address}"
    elif 0x18080f000 <= addr_num <= 0x180813000:
        return f"UIDeviceRotation_{address}"
    elif 0x180813000 <= addr_num <= 0x180817000:
        return f"UIInterfaceOrientation_{address}"
    elif 0x180817000 <= addr_num <= 0x18081b000:
        return f"UISafeArea_{address}"
    elif 0x18081b000 <= addr_num <= 0x18081f000:
        return f"UIStatusBarInset_{address}"
    elif 0x18081f000 <= addr_num <= 0x180823000:
        return f"UINavigationBarHeight_{address}"
    elif 0x180823000 <= addr_num <= 0x180827000:
        return f"UITabBarHeight_{address}"
    elif 0x180827000 <= addr_num <= 0x18082b000:
        return f"UIToolbarHeight_{address}"
    elif 0x18082b000 <= addr_num <= 0x18082f000:
        return f"UIKeyboardInset_{address}"
    elif 0x18082f000 <= addr_num <= 0x180833000:
        return f"UIMarginLayout_{address}"
    elif 0x180833000 <= addr_num <= 0x180837000:
        return f"UIPaddingLayout_{address}"
    elif 0x180837000 <= addr_num <= 0x18083b000:
        return f"UIBorderLayout_{address}"
    elif 0x18083b000 <= addr_num <= 0x18083f000:
        return f"UICornerRadius_{address}"
    elif 0x18083f000 <= addr_num <= 0x180843000:
        return f"UIShadow_{address}"
    elif 0x180843000 <= addr_num <= 0x180847000:
        return f"UIBlur_{address}"
    elif 0x180847000 <= addr_num <= 0x18084b000:
        return f"UITint_{address}"
    elif 0x18084b000 <= addr_num <= 0x18084f000:
        return f"UIOverlay_{address}"
    elif 0x18084f000 <= addr_num <= 0x180853000:
        return f"UIModal_{address}"
    elif 0x180853000 <= addr_num <= 0x180857000:
        return f"UIPopover_{address}"
    elif 0x180857000 <= addr_num <= 0x18085b000:
        return f"UISheet_{address}"
    elif 0x18085b000 <= addr_num <= 0x18085f000:
        return f"UIFullScreen_{address}"
    elif 0x18085f000 <= addr_num <= 0x180863000:
        return f"UISplitScreen_{address}"
    elif 0x180863000 <= addr_num <= 0x180867000:
        return f"UIMultiWindow_{address}"
    elif 0x180867000 <= addr_num <= 0x18086b000:
        return f"UIDragAndDrop_{address}"
    elif 0x18086b000 <= addr_num <= 0x18086f000:
        return f"UICopyPaste_{address}"
    elif 0x18086f000 <= addr_num <= 0x180873000:
        return f"UIUndoRedo_{address}"
    elif 0x180873000 <= addr_num <= 0x180877000:
        return f"UITextFormat_{address}"
    elif 0x180877000 <= addr_num <= 0x18087b000:
        return f"UIFontStyle_{address}"
    elif 0x18087b000 <= addr_num <= 0x18087f000:
        return f"UITextAlignment_{address}"
    elif 0x18087f000 <= addr_num <= 0x180883000:
        return f"UILineBreak_{address}"
    elif 0x180883000 <= addr_num <= 0x180887000:
        return f"UITextTruncation_{address}"
    elif 0x180887000 <= addr_num <= 0x18088b000:
        return f"UITextWrapping_{address}"
    elif 0x18088b000 <= addr_num <= 0x18088f000:
        return f"UITextEllipsis_{address}"
    elif 0x18088f000 <= addr_num <= 0x180893000:
        return f"UITextBaseline_{address}"
    elif 0x180893000 <= addr_num <= 0x180897000:
        return f"UITextDecoration_{address}"
    elif 0x180897000 <= addr_num <= 0x18089b000:
        return f"UITextTransform_{address}"
    elif 0x18089b000 <= addr_num <= 0x18089f000:
        return f"UITextCase_{address}"
    elif 0x18089f000 <= addr_num <= 0x1808a3000:
        return f"UITextSpacing_{address}"
    elif 0x1808a3000 <= addr_num <= 0x1808a7000:
        return f"UITextKerning_{address}"
    elif 0x1808a7000 <= addr_num <= 0x1808ab000:
        return f"UITextLigature_{address}"
    elif 0x1808ab000 <= addr_num <= 0x1808af000:
        return f"UITextTracking_{address}"
    elif 0x1808af000 <= addr_num <= 0x1808b3000:
        return f"UITextLeading_{address}"
    elif 0x1808b3000 <= addr_num <= 0x1808b7000:
        return f"UITextParagraph_{address}"
    elif 0x1808b7000 <= addr_num <= 0x1808bb000:
        return f"UITextList_{address}"
    elif 0x1808bb000 <= addr_num <= 0x1808bf000:
        return f"UITextBullet_{address}"
    elif 0x1808bf000 <= addr_num <= 0x1808c3000:
        return f"UITextNumbering_{address}"
    elif 0x1808c3000 <= addr_num <= 0x1808c7000:
        return f"UITextIndent_{address}"
    elif 0x1808c7000 <= addr_num <= 0x1808cb000:
        return f"UITextTab_{address}"
    elif 0x1808cb000 <= addr_num <= 0x1808cf000:
        return f"UITextTable_{address}"
    elif 0x1808cf000 <= addr_num <= 0x1808d3000:
        return f"UITextColumn_{address}"
    elif 0x1808d3000 <= addr_num <= 0x1808d7000:
        return f"UITextRow_{address}"
    elif 0x1808d7000 <= addr_num <= 0x1808db000:
        return f"UITextCell_{address}"
    elif 0x1808db000 <= addr_num <= 0x1808df000:
        return f"UITextSpan_{address}"
    elif 0x1808df000 <= addr_num <= 0x1808e3000:
        return f"UITextRun_{address}"
    elif 0x1808e3000 <= addr_num <= 0x1808e7000:
        return f"UITextGlyph_{address}"
    elif 0x1808e7000 <= addr_num <= 0x1808eb000:
        return f"UITextFont_{address}"
    elif 0x1808eb000 <= addr_num <= 0x1808ef000:
        return f"UITextSize_{address}"
    elif 0x1808ef000 <= addr_num <= 0x1808f3000:
        return f"UITextWeight_{address}"
    elif 0x1808f3000 <= addr_num <= 0x1808f7000:
        return f"UITextStyle_{address}"
    elif 0x1808f7000 <= addr_num <= 0x1808fb000:
        return f"UITextColor_{address}"
    elif 0x1808fb000 <= addr_num <= 0x1808ff000:
        return f"UITextBackground_{address}"
    elif 0x1808ff000 <= addr_num <= 0x180903000:
        return f"UITextOutline_{address}"
    elif 0x180903000 <= addr_num <= 0x180907000:
        return f"UITextShadow_{address}"
    elif 0x180907000 <= addr_num <= 0x18090b000:
        return f"UITextGlow_{address}"
    elif 0x18090b000 <= addr_num <= 0x18090f000:
        return f"UITextGradient_{address}"
    elif 0x18090f000 <= addr_num <= 0x180913000:
        return f"UITextTexture_{address}"
    elif 0x180913000 <= addr_num <= 0x180917000:
        return f"UITextShader_{address}"
    elif 0x180917000 <= addr_num <= 0x18091b000:
        return f"UITextEffect_{address}"
    elif 0x18091b000 <= addr_num <= 0x18091f000:
        return f"UITextAnimation_{address}"
    elif 0x18091f000 <= addr_num <= 0x180923000:
        return f"UITextTransition_{address}"
    elif 0x180923000 <= addr_num <= 0x180927000:
        return f"UITextInteraction_{address}"
    elif 0x180927000 <= addr_num <= 0x18092b000:
        return f"UITextSelection_{address}"
    elif 0x18092b000 <= addr_num <= 0x18092f000:
        return f"UITextEditing_{address}"
    elif 0x18092f000 <= addr_num <= 0x180933000:
        return f"UITextInput_{address}"
    elif 0x180933000 <= addr_num <= 0x180937000:
        return f"UITextIME_{address}"
    elif 0x180937000 <= addr_num <= 0x18093b000:
        return f"UITextAutocomplete_{address}"
    elif 0x18093b000 <= addr_num <= 0x18093f000:
        return f"UITextSpellCheck_{address}"
    elif 0x18093f000 <= addr_num <= 0x180943000:
        return f"UITextGrammar_{address}"
    elif 0x180943000 <= addr_num <= 0x180947000:
        return f"UITextAccessibility_{address}"
    elif 0x180947000 <= addr_num <= 0x18094b000:
        return f"UITextLocalization_{address}"
    elif 0x18094b000 <= addr_num <= 0x18094f000:
        return f"UITextRTL_{address}"
    elif 0x18094f000 <= addr_num <= 0x180953000:
        return f"UITextBiDi_{address}"
    elif 0x180953000 <= addr_num <= 0x180957000:
        return f"UITextScript_{address}"
    elif 0x180957000 <= addr_num <= 0x18095b000:
        return f"UITextLanguage_{address}"
    elif 0x18095b000 <= addr_num <= 0x18095f000:
        return f"UITextLocale_{address}"
    elif 0x18095f000 <= addr_num <= 0x180963000:
        return f"UITextFormat_{address}"
    elif 0x180963000 <= addr_num <= 0x180967000:
        return f"UITextParse_{address}"
    elif 0x180967000 <= addr_num <= 0x18096b000:
        return f"UITextRender_{address}"
    elif 0x18096b000 <= addr_num <= 0x18096f000:
        return f"UITextLayout_{address}"
    elif 0x18096f000 <= addr_num <= 0x180973000:
        return f"UITextMeasure_{address}"
    elif 0x180973000 <= addr_num <= 0x180977000:
        return f"UITextMetrics_{address}"
    elif 0x180977000 <= addr_num <= 0x18097b000:
        return f"UITextBounds_{address}"
    elif 0x18097b000 <= addr_num <= 0x18097f000:
        return f"UITextFrame_{address}"
    elif 0x18097f000 <= addr_num <= 0x180983000:
        return f"UITextContainer_{address}"
    elif 0x180983000 <= addr_num <= 0x180987000:
        return f"UITextFlow_{address}"
    elif 0x180987000 <= addr_num <= 0x18098b000:
        return f"UITextHyphenation_{address}"
    elif 0x18098b000 <= addr_num <= 0x18098f000:
        return f"UITextJustification_{address}"
    elif 0x18098f000 <= addr_num <= 0x180993000:
        return f"UITextBalancing_{address}"
    elif 0x180993000 <= addr_num <= 0x180997000:
        return f"UITextKashida_{address}"
    elif 0x180997000 <= addr_num <= 0x18099b000:
        return f"UITextDiacritics_{address}"
    elif 0x18099b000 <= addr_num <= 0x18099f000:
        return f"UITextVowelMarks_{address}"
    elif 0x18099f000 <= addr_num <= 0x1809a3000:
        return f"UITextLigatures_{address}"
    elif 0x1809a3000 <= addr_num <= 0x1809a7000:
        return f"UITextSwashes_{address}"
    elif 0x1809a7000 <= addr_num <= 0x1809ab000:
        return f"UITextAlternates_{address}"
    elif 0x1809ab000 <= addr_num <= 0x1809af000:
        return f"UITextStylistic_{address}"
    elif 0x1809af000 <= addr_num <= 0x1809b3000:
        return f"UITextContextual_{address}"
    elif 0x1809b3000 <= addr_num <= 0x1809b7000:
        return f"UITextHistorical_{address}"
    elif 0x1809b7000 <= addr_num <= 0x1809bb000:
        return f"UITextNumeral_{address}"
    elif 0x1809bb000 <= addr_num <= 0x1809bf000:
        return f"UITextFraction_{address}"
    elif 0x1809bf000 <= addr_num <= 0x1809c3000:
        return f"UITextOrdinal_{address}"
    elif 0x1809c3000 <= addr_num <= 0x1809c7000:
        return f"UITextScientific_{address}"
    elif 0x1809c7000 <= addr_num <= 0x1809cb000:
        return f"UITextMathematical_{address}"
    elif 0x1809cb000 <= addr_num <= 0x1809cf000:
        return f"UITextCurrency_{address}"
    elif 0x1809cf000 <= addr_num <= 0x1809d3000:
        return f"UITextPercentage_{address}"
    elif 0x1809d3000 <= addr_num <= 0x1809d7000:
        return f"UITextDateTime_{address}"
    elif 0x1809d7000 <= addr_num <= 0x1809db000:
        return f"UITextPhoneNumber_{address}"
    elif 0x1809db000 <= addr_num <= 0x1809df000:
        return f"UITextEmailAddress_{address}"
    elif 0x1809df000 <= addr_num <= 0x1809e3000:
        return f"UITextURL_{address}"
    elif 0x1809e3000 <= addr_num <= 0x1809e7000:
        return f"UITextPassword_{address}"
    elif 0x1809e7000 <= addr_num <= 0x1809eb000:
        return f"UITextSecure_{address}"
    elif 0x1809eb000 <= addr_num <= 0x1809ef000:
        return f"UITextMasked_{address}"
    elif 0x1809ef000 <= addr_num <= 0x1809f3000:
        return f"UITextHidden_{address}"
    elif 0x1809f3000 <= addr_num <= 0x1809f7000:
        return f"UITextPlaceholder_{address}"
    elif 0x1809f7000 <= addr_num <= 0x1809fb000:
        return f"UITextHint_{address}"
    elif 0x1809fb000 <= addr_num <= 0x1809ff000:
        return f"UITextLabel_{address}"
    elif 0x1809ff000 <= addr_num <= 0x180a03000:
        return f"UITextCaption_{address}"
    elif 0x180a03000 <= addr_num <= 0x180a07000:
        return f"UITextSubhead_{address}"
    elif 0x180a07000 <= addr_num <= 0x180a0b000:
        return f"UITextHeadline_{address}"
    elif 0x180a0b000 <= addr_num <= 0x180a0f000:
        return f"UITextTitle_{address}"
    elif 0x180a0f000 <= addr_num <= 0x180a13000:
        return f"UITextDisplay_{address}"
    else:
        return f"UIFunction_{address}"

def beautify_ui_functions(content):
    """美化UI系统函数名"""
    # 匹配 FUN_1806xxxx 格式的函数名
    pattern = r'\bFUN_(1806[0-9a-f]{4})\b'
    
    def replace_function(match):
        address = match.group(1)
        new_name = generate_function_name(address)
        print(f"替换 {match.group(0)} -> {new_name}")
        return new_name
    
    # 替换所有匹配的函数名
    beautified_content = re.sub(pattern, replace_function, content)
    
    return beautified_content

def main():
    if len(sys.argv) != 2:
        print("用法: python beautify_ui_functions.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    print(f"读取文件: {file_path}")
    content = read_file(file_path)
    
    # 美化函数名
    print("开始美化函数名...")
    beautified_content = beautify_ui_functions(content)
    
    # 写入文件
    print(f"写入文件: {file_path}")
    write_file(file_path, beautified_content)
    
    print("完成!")

if __name__ == "__main__":
    main()