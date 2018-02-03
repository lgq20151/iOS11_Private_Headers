/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayStatus : NSObject {
    int  _attachment;
    FBSDisplayConfiguration * _configuration;
    unsigned int  _displayID;
    unsigned int  _observation;
}

- (void)dealloc;
- (id)description;

@end
