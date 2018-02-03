/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase {
    unsigned long long  m_accessibilityTraitsFromAncestor;
    int  m_isAccessibilityElement;
}

- (void)_accessibilityActivate;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityArticleAncestor;
- (struct CGPoint { double x1; double x2; })_accessibilityConvertPointToViewSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityFieldsetAncestor;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityFrameAncestor;
- (bool)_accessibilityHasTouchEventListener;
- (bool)_accessibilityIsLandmarkRole:(int)arg1;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityLandmarkAncestor;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityListAncestor;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1;
- (id)_accessibilityParentForSubview:(id)arg1;
- (struct CGPath { }*)_accessibilityPath;
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityScrollPosition;
- (struct CGSize { double x1; double x2; })_accessibilityScrollSize;
- (bool)_accessibilityScrollToVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityScrollVisibleRect;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityTableAncestor;
- (unsigned long long)_accessibilityTextEntryTraits;
- (unsigned long long)_accessibilityTraitsFromAncestors;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityTreeAncestor;
- (bool)_accessibilityValueIsAutofilled;
- (id)_accessibilityWebDocumentView;
- (bool)_addAccessibilityObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)arg1 toTextMarkerArray:(id)arg2;
- (unsigned long long)_axAdjustableTrait;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axContainedByFieldsetTrait;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByListTrait;
- (unsigned long long)_axContainedByTableTrait;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axImageTrait;
- (unsigned long long)_axLinkTrait;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axSearchFieldTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axSelectedTrait;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axTextAreaTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axUpdatesFrequentlyTrait;
- (unsigned long long)_axVisitedTrait;
- (unsigned long long)_axWebContentTrait;
- (struct RefPtr<WebCore::Range> { struct Range {} *x1; })_convertToDOMRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_convertToNSRange:(struct Range { unsigned int x1; struct Ref<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_3_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_4_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_4_1_3; } x4; }*)arg1;
- (bool)_prepareAccessibilityCall;
- (id)_stringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 attributed:(bool)arg2;
- (unsigned long long)accessibilityARIAColumnCount;
- (unsigned long long)accessibilityARIAColumnIndex;
- (id)accessibilityARIACurrentStatus;
- (bool)accessibilityARIAIsBusy;
- (bool)accessibilityARIALiveRegionIsAtomic;
- (id)accessibilityARIALiveRegionStatus;
- (id)accessibilityARIARelevantStatus;
- (unsigned long long)accessibilityARIARowCount;
- (unsigned long long)accessibilityARIARowIndex;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (unsigned long long)accessibilityBlockquoteLevel;
- (bool)accessibilityCanFuzzyHitTest;
- (bool)accessibilityCanSetValue;
- (struct CGPoint { double x1; double x2; })accessibilityClickPoint;
- (unsigned long long)accessibilityColumnCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityColumnRange;
- (id)accessibilityContainer;
- (id)accessibilityDatetimeValue;
- (void)accessibilityDecreaseSelection:(int)arg1;
- (void)accessibilityDecrement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityElementRect;
- (id)accessibilityExpandedTextValue;
- (id)accessibilityFindMatchingObjects:(id)arg1;
- (id)accessibilityFlowToElements;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (bool)accessibilityHasPopup;
- (id)accessibilityHeaderElements;
- (id)accessibilityHint;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityIdentifier;
- (void)accessibilityIncreaseSelection:(int)arg1;
- (void)accessibilityIncrement;
- (id)accessibilityInvalidStatus;
- (bool)accessibilityIsAttachmentElement;
- (bool)accessibilityIsComboBox;
- (bool)accessibilityIsDialog;
- (bool)accessibilityIsExpanded;
- (bool)accessibilityIsMathTopObject;
- (bool)accessibilityIsPressed;
- (bool)accessibilityIsShowingValidationMessage;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLinkedElement;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathFencedCloseString;
- (id)accessibilityMathFencedOpenString;
- (long long)accessibilityMathLineThickness;
- (id)accessibilityMathNumeratorObject;
- (id)accessibilityMathOverObject;
- (id)accessibilityMathPostscripts;
- (id)accessibilityMathPrescripts;
- (id)accessibilityMathRadicandObject;
- (id)accessibilityMathRootIndexObject;
- (id)accessibilityMathSubscriptObject;
- (id)accessibilityMathSuperscriptObject;
- (id)accessibilityMathType;
- (id)accessibilityMathUnderObject;
- (void)accessibilityModifySelection:(int)arg1 increase:(bool)arg2;
- (void)accessibilityMoveSelectionToMarker:(id)arg1;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)accessibilityObjectForTextMarker:(id)arg1;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)accessibilityPostProcessHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)accessibilityRequired;
- (id)accessibilityRoleDescription;
- (unsigned long long)accessibilityRowCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRowRange;
- (bool)accessibilityScroll:(long long)arg1;
- (id)accessibilitySortDirection;
- (id)accessibilitySpeechHint;
- (bool)accessibilitySupportsARIAExpanded;
- (bool)accessibilitySupportsARIAPressed;
- (id)accessibilityTitleElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityValue;
- (id)arrayOfTextForTextMarkers:(id)arg1 attributed:(bool)arg2;
- (id)attachmentView;
- (id)attributedStringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)containsUnnaturallySegmentedChildren;
- (struct CGPoint { double x1; double x2; })convertPointToScreenSpace:(struct FloatPoint { float x1; float x2; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToScreenSpace:(struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg1;
- (void)dealloc;
- (id)description;
- (void)detach;
- (struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)detailParentForObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)arg1;
- (struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)detailParentForSummaryObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)arg1;
- (bool)determineIsAccessibilityElement;
- (void)disableAttributeCaching;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })elementTextRange;
- (id)elementsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)enableAttributeCaching;
- (bool)fileUploadButtonReturnsValueInTitle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTextMarkers:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)initWithAccessibilityObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)arg1;
- (bool)isAccessibilityElement;
- (bool)isAttachment;
- (bool)isSVGGroupElement;
- (long long)lengthForTextMarkers:(id)arg1;
- (id)lineEndMarkerForMarker:(id)arg1;
- (id)lineStartMarkerForMarker:(id)arg1;
- (id)nextMarkerForCharacterOffset:(struct CharacterOffset { struct Node {} *x1; int x2; int x3; int x4; }*)arg1;
- (id)nextMarkerForMarker:(id)arg1;
- (long long)positionForTextMarker:(id)arg1;
- (void)postChildrenChangedNotification;
- (void)postExpandedChangedNotification;
- (void)postFocusChangeNotification;
- (void)postInvalidStatusChangedNotification;
- (void)postLayoutChangeNotification;
- (void)postLiveRegionChangeNotification;
- (void)postLiveRegionCreatedNotification;
- (void)postLoadCompleteNotification;
- (void)postScrollStatusChangeNotification;
- (void)postSelectedTextChangeNotification;
- (void)postValueChangedNotification;
- (id)previousMarkerForCharacterOffset:(struct CharacterOffset { struct Node {} *x1; int x2; int x3; int x4; }*)arg1;
- (id)previousMarkerForMarker:(id)arg1;
- (struct RefPtr<WebCore::Range> { struct Range {} *x1; })rangeForTextMarkers:(id)arg1;
- (struct RefPtr<WebCore::Range> { struct Range {} *x1; })rangeFromMarkers:(id)arg1 withText:(id)arg2;
- (id)rectsForSelectionRects:(const struct Vector<WebCore::SelectionRect, 0, WTF::CrashOnOverflow, 16> { struct SelectionRect {} *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)selectedTextMarker;
- (id)selectionRangeString;
- (id)startOrEndTextMarkerForTextMarkers:(id)arg1 isStart:(bool)arg2;
- (id)stringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)stringForTextMarkers:(id)arg1;
- (bool)stringValueShouldBeUsedInLabel;
- (struct AccessibilityTableCell { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; int x12; int x13; struct Node {} *x14; struct RenderObject {} *x15; struct WeakPtrFactory<WebCore::AccessibilityRenderObject> { struct Ref<WTF::WeakReference<WebCore::AccessibilityRenderObject> > { struct WeakReference<WebCore::AccessibilityRenderObject> {} *x_1_2_1; } x_16_1_1; } x16; int x17; int x18; }*)tableCellParent;
- (struct AccessibilityTable { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; int x12; int x13; struct Node {} *x14; struct RenderObject {} *x15; struct WeakPtrFactory<WebCore::AccessibilityRenderObject> { struct Ref<WTF::WeakReference<WebCore::AccessibilityRenderObject> > { struct WeakReference<WebCore::AccessibilityRenderObject> {} *x_1_2_1; } x_16_1_1; } x16; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_17_1_1; unsigned int x_17_1_2; unsigned int x_17_1_3; } x17; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_18_1_1; unsigned int x_18_1_2; unsigned int x_18_1_3; } x18; }*)tableParent;
- (id)textMarkerForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)textMarkerForPosition:(long long)arg1;
- (id)textMarkerRange;
- (id)textMarkerRangeForMarkers:(id)arg1;
- (id)textMarkerRangeForSelection;
- (id)textMarkerRangeFromMarkers:(id)arg1 withText:(id)arg2;
- (id)textMarkersForRange:(struct RefPtr<WebCore::Range> { struct Range {} *x1; })arg1;
- (id)textRectsFromMarkers:(id)arg1 withText:(id)arg2;
- (struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)treeItemParentForObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)arg1;

@end
