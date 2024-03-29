#include "gurl_parser.h"

using namespace gurl;

GURL gurl::gParseBase( const std::string& baseUrl )
{
    return GURL(baseUrl);
}

TUrlParseResult gurl::gParseRel( GURL& baseUrl, const std::string& relativeUrl )
{
    GURL   relativeGurl(baseUrl.Resolve(relativeUrl));
    return TUrlParseResult(relativeGurl.host(), relativeGurl.PathForRequest());
}

void CParser::parseBase( const std::string& baseUri )
{
    m_tUri  =   gParseBase(baseUri);
}

void CParser::parseRel( const std::string& relUri )
{
    gParseRel(m_tUri, relUri);
}
