/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIIndexBarEntry : NSObject {
    UIImage * _image;
    NSIndexPath * _indexPath;
    NSString * _shortTitle;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly) NSString *effectiveShortTitle;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSIndexPath *indexPath;
@property (nonatomic, copy) NSString *shortTitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long type;

+ (id)_dotImageInView:(id)arg1;
+ (id)_externalDotImageInView:(id)arg1;
+ (id)entryForDotInView:(id)arg1;
+ (id)entryForNumbers;
+ (id)entryForSearch;
+ (id)entryWithTitle:(id)arg1;
+ (id)entryWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)effectiveShortTitle;
- (id)image;
- (id)indexPath;
- (void)setImage:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setShortTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)shortTitle;
- (id)title;
- (long long)type;

@end
