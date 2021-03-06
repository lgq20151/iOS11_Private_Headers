/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardSectionRowModel : NSObject <SearchUIRowModel> {
    SFCardSection * _cardSection;
    SFSearchResult * _identifyingResult;
}

@property (retain) SFCardSection *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SFSearchResult *identifyingResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)anyInlineCardSectionsHaveNextCards;
- (bool)anyInlineCardSectionsHavePunchouts;
- (id)cardSection;
- (id)dragAppBundleID;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)identifyingResult;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2;
- (bool)isDraggable;
- (bool)isSuggestion;
- (bool)isTappable;
- (double)leadingSeparatorImageInset;
- (id)nextCard;
- (id)punchouts;
- (id)reuseIdentifier;
- (int)separatorStyle;
- (void)setCardSection:(id)arg1;
- (void)setIdentifyingResult:(id)arg1;
- (Class)viewClass;

@end
