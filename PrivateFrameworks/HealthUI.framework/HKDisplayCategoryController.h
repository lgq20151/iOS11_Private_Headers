/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayCategoryController : NSObject {
    NSMutableArray * _displayCategories;
    NSMutableDictionary * _displayCategoriesByCategoryID;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allDisplayCategories;
- (id)categoryWithID:(long long)arg1;
- (id)init;

@end
