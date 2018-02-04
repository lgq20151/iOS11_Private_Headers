/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTCardItem : AceObject <SASTTemplateItem>

@property (nonatomic, retain) SAUIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAUIDecoratedText *footnote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIDecoratedText *label;
@property (nonatomic, retain) SAUIColor *labelTextColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIDecoratedText *title;
@property (nonatomic, retain) SAUIColor *titleBackgroundColor;
@property (nonatomic, retain) SAUIColor *titleTextColor;

+ (id)cardItem;
+ (id)cardItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)backgroundColor;
- (id)encodedClassName;
- (id)footnote;
- (id)groupIdentifier;
- (id)label;
- (id)labelTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBackgroundColor:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (id)title;
- (id)titleBackgroundColor;
- (id)titleTextColor;

@end