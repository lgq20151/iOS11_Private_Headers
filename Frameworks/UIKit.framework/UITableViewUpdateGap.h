/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewUpdateGap : NSObject {
    NSMutableArray * _deleteItems;
    UIUpdateItem * _firstUpdateItem;
    struct { 
        unsigned int hasAutomaticAnimationItems : 1; 
    }  _gapFlags;
    NSMutableArray * _insertItems;
    UIUpdateItem * _lastUpdateItem;
}

@property (nonatomic, readonly) NSArray *deleteItems;
@property (nonatomic, retain) UIUpdateItem *firstUpdateItem;
@property (nonatomic, readonly) bool hasAutomaticAnimationItems;
@property (nonatomic, readonly) bool hasInserts;
@property (nonatomic, readonly) NSArray *insertItems;
@property (nonatomic, readonly) bool isDeleteBasedGap;
@property (nonatomic, readonly) bool isSectionBasedGap;
@property (nonatomic, retain) UIUpdateItem *lastUpdateItem;
@property (nonatomic, readonly) NSArray *updateItems;

+ (id)gapWithUpdateItem:(id)arg1;

- (void).cxx_destruct;
- (void)addUpdateItem:(id)arg1;
- (id)deleteItems;
- (id)description;
- (id)firstUpdateItem;
- (bool)hasAutomaticAnimationItems;
- (bool)hasInserts;
- (id)init;
- (id)insertItems;
- (bool)isDeleteBasedGap;
- (bool)isSectionBasedGap;
- (id)lastUpdateItem;
- (void)setFirstUpdateItem:(id)arg1;
- (void)setLastUpdateItem:(id)arg1;
- (id)updateItems;

@end
