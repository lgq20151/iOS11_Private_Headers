/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarItem : NSObject {
    NSMutableDictionary * _displayItems;
    NSString * _identifier;
    bool  _needsUpdate;
}

@property (readonly) NSSet *dependentEntryKeys;
@property (nonatomic, retain) NSMutableDictionary *displayItems;
@property (copy) NSString *identifier;
@property (readonly) bool needsUpdate;

+ (id)createItemForIdentifier:(id)arg1 visualProvider:(id)arg2;
+ (id)defaultDisplayIdentifier;
+ (id)displayItemIdentifierFromIdentifier:(id)arg1 string:(id)arg2;
+ (id)displayItemIdentifierFromString:(id)arg1;
+ (id)identifier;
+ (Class)itemClassForIdentifier:(id)arg1 visualProvider:(id)arg2;
+ (id)itemIdentifierForDisplayItemIdentifier:(id)arg1;
+ (id)itemIdentifierFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)description;
- (id)displayItemForIdentifier:(id)arg1;
- (id)displayItems;
- (id)identifier;
- (id)init;
- (bool)needsUpdate;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)setDisplayItems:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNeedsUpdate;
- (id)viewForIdentifier:(id)arg1;

@end
