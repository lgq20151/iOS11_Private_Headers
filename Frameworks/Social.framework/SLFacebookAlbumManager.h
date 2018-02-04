/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookAlbumManager : NSObject {
    ACAccount * _account;
    <SLFacebookAlbumManagerDelegate> * _delegate;
    bool  _isCanceled;
    SLFacebookAlbum * _selectedAlbum;
    NSOperationQueue * photoQueue;
}

@property (retain) ACAccount *account;
@property <SLFacebookAlbumManagerDelegate> *delegate;
@property (retain) SLFacebookAlbum *selectedAlbum;

- (void).cxx_destruct;
- (id)account;
- (id)checkErrorResponse:(id)arg1;
- (id)defaultAlbumWithDefaultAlbumResponse:(id)arg1;
- (id)delegate;
- (void)fetchDefaultAlbum:(id /* block */)arg1;
- (void)handleAlbumResponse:(id)arg1 error:(id)arg2;
- (void)handleDefaultAlbumFetchResponse:(id)arg1 handler:(id /* block */)arg2 error:(id)arg3;
- (id)initWithAccount:(id)arg1;
- (void)loadCoverImageForAlbum:(id)arg1;
- (id)parseAlbumsWithResponse:(id)arg1;
- (void)performAlbumRequestWithBatchRequests:(id)arg1 handler:(id /* block */)arg2;
- (void)refreshAlbums;
- (id)selectedAlbum;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedAlbum:(id)arg1;

@end