/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _NSTextStorageSideData : NSObject {
    id  _delegate;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lazyFixRange;
}

@property id delegate;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
