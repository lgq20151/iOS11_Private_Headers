/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeRecipientGroup : MFComposeRecipient {
    NSArray * _children;
}

- (void)_populateSortedChildren;
- (id)address;
- (id)children;
- (id)childrenWithCompleteMatches;
- (id)commentedAddress;
- (id)completelyMatchedAttributedStrings;
- (id)compositeName;
- (void)dealloc;
- (id)displayString;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isRemovableFromSearchResults;
- (id)label;
- (id)placeholderName;
- (int)property;
- (void*)record;
- (int)recordID;
- (id)sortedChildren;
- (id)unlocalizedLabel;
- (bool)wasCompleteMatch;

@end
