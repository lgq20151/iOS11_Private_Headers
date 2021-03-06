/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconRequest : WBSSiteMetadataRequest {
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumIconSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumIconSize;
    NSString * _monogramTitle;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumIconSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumIconSize;
@property (nonatomic, readonly, copy) NSString *monogramTitle;

+ (id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumIconSize;
- (struct CGSize { double x1; double x2; })minimumIconSize;
- (id)monogramTitle;

@end
