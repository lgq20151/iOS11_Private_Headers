/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNLPDetection : NSObject {
    unsigned long long  _category;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _string;
}

@property (nonatomic) unsigned long long category;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *string;

- (void).cxx_destruct;
- (unsigned long long)category;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setCategory:(unsigned long long)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
