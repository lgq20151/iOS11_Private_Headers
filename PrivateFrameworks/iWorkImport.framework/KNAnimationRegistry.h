/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationRegistry : NSObject {
    NSDictionary * mAlternateEffectIdentifiersForEffectIdentifierAndFilter;
    NSArray * mAnimationInfos;
    NSDictionary * mClassesForTypeAndCategory;
    NSDictionary * mClassesForTypeAndFilter;
    NSDictionary * mClassesForTypeAndName;
    NSDictionary * mClassesForTypeAndObsoleteName;
}

+ (id)animationsInBundle;
+ (id)categoryNameForPluginClass:(Class)arg1;
+ (id)instance;
+ (id)localizedCategoryNameForCategory:(long long)arg1;
+ (id)localizedNameForUnsupportedAnimation:(id)arg1;

- (id)allAnimationInfos;
- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2;
- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2 includeObsoleteNames:(bool)arg3;
- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2 includeObsoleteNames:(bool)arg3 drawable:(id)arg4;
- (id)animationInfosForAnimationType:(long long)arg1 category:(id)arg2;
- (id)animationInfosForAnimationType:(long long)arg1 filter:(id)arg2;
- (bool)canMapEffectIdentifier:(id)arg1 animationType:(long long)arg2 toEffectIdentifier:(id)arg3 includeObsoleteNames:(bool)arg4 forDrawable:(id)arg5;
- (void)dealloc;
- (id)distinctCategoriesForType:(long long)arg1;
- (id)init;
- (id)p_buildAlternateFilterMap;

@end
